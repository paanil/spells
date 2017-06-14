#include "json_spell_parser.h"
#include "spell_common.h"
#include "spell_iterator.h"
#include "simplex.h"
#include "utils.h"
#include <cstdio>
#include <cstring>

// Initial notes

struct SpellNotes
{
    const char *spell_name;
    const char *notes;
};

static SpellNotes initial_notes[] =
{
    {
        "Acid Splash",
        "1-2 targets; dex save or 1d6/acid; +1d6 at 5/11/17"
    }
};



#define STR_APPEND(dest, fmt, ...) do { \
    int len = strlen(dest); \
    snprintf(dest+len, sizeof(dest)-len, fmt, ##__VA_ARGS__); \
} while(0)
#define STR_APPEND_SEP(dest, sep, fmt, ...) do { \
    int len = strlen(dest); \
    snprintf(dest + len, sizeof(dest) - len, len ? sep fmt : fmt, ##__VA_ARGS__); \
} while(0)
#define ERROR(msg, ...) do { \
    LogError("%s: " msg, spell.name, ##__VA_ARGS__); \
    return false; \
} while(0)


// Custom spell processing function

PROCESS_SPELL(PrintSpell)
{
    char notes[256] = "";

    for (int i = 0; i < (int)ArrayCount(initial_notes); ++i)
    {
        if (strcmp(spell.name, initial_notes[i].spell_name) == 0)
        {
            STR_APPEND(notes, "%s", initial_notes[i].notes);
            break;
        }
    }

    char casters[64] = "";
    {
        for (int i = 0; i < Caster::Count; ++i)
        {
            SpellIterator it;
            for (it = IterateCasterSpells(i); !it.IsEnd(); it.Next())
            {
                if (it.GetID() == spell.id)
                {
                    STR_APPEND_SEP(casters, ", ", "%s", Caster::ToString(i));
                    break;
                }
            }
        }
    }

    char casting_time[64] = "";
    {
        Simplex lex(spell.casting_time);

        const char *patterns[] = {
            "action", "bonus action", "reaction", "minute?", "hour?", 0
        }, *units[] = {
            "Action", "BonusAction", "Reaction", "Minutes", "Hours"
        };

        int num = 0, unit = 0;
        if (!lex.Num(&num).MatchOne(patterns, &unit))
            ERROR("Invalid casting time!");

        // Reaction (unit == 2) describes, when it can be taken.
        // Spell 254 (Plant Growth) has casting time  "1 action or 8 hours".
        if (unit != 2 && lex.Garbage() && spell.id != 254)
            ERROR("Garbage after casting time!");

        STR_APPEND(casting_time, "%d, %s", num, units[unit]);
    }

    char range[64] = "";
    {
        Simplex lex(spell.range);

        int num = 0;
        if (lex.Num(&num))
        {
            const char *patterns[] = {"feet", "mile?", 0};
            const char *units[] = {"Feet", "Miles"};

            int unit = 0;
            if (!lex.MatchOne(patterns, &unit))
                ERROR("Invalid range!");

            STR_APPEND(range, "%d, %s", num, units[unit]);
        }
        else
        {
            const char *range_types[] = {
                "Self", "Touch", "Sight", "Unlimited", "Special", 0
            };

            int type = 0;
            if (!lex.MatchOne(range_types, &type))
                ERROR("Invalid range!");

            if (type == 0 && lex.Garbage())
            {
                const char *patterns[] = {
                    "-foot radius", "-mile radius",
                    "-foot cone", "-foot cube", "-foot line",
                    "-foot-radius sphere", "-foot-radius hemisphere", 0
                }, *effect_types[] = {
                    "ft radius", "mi radius",
                    "ft cone", "ft cube", "ft line",
                    "ft-radius sphere", "ft-radius hemisphere"
                };

                int effect_type = 0;
                if (!lex.Char('(').Num(&num)
                    .MatchOne(patterns, &effect_type).Char(')'))
                {
                    ERROR("Expected effect type!");
                }

                STR_APPEND_SEP(notes, "; ", "%d%s",
                               num, effect_types[effect_type]);
            }

            if (lex.Garbage())
                ERROR("Garbage after range!");

            STR_APPEND(range, "%s", range_types[type]);
        }
    }

    char components[64] = "";
    {
        Simplex lex(spell.components);

        if (lex.Char('V'))
        {
            STR_APPEND_SEP(components, ", ", "Verbal");
            lex.Char(',');
        }
        if (lex.Char('S'))
        {
            STR_APPEND_SEP(components, ", ", "Somatic");
            lex.Char(',');
        }
        if (lex.Char('M'))
        {
            STR_APPEND_SEP(components, ", ", "Material");

            if (!lex.Char('('))
                ERROR("Expected materials in parentheses!");

            while (lex.Garbage() && !lex.Char(')'))
            {
                int gold = 0;
                if (lex.Num(&gold))
                {
                    STR_APPEND_SEP(notes, "; ", "material cost");

                    const char *gp[] = {"gp", 0};

                    int index;
                    if (lex.MatchOne(gp, &index))
                    {
                        while (lex.Garbage() && !lex.Char(')'))
                        {
                            const char *consumes[] = {"consumes", 0};
                            if (lex.MatchOne(consumes, &index))
                            {
                                STR_APPEND(notes, " (consumed)");
                                while (lex.Garbage() && !lex.Char(')'))
                                    ++lex.at;
                                break;
                            }

                            ++lex.at;
                        }

                        break;
                    }
                }
                else
                {
                    ++lex.at;
                }
            }

            if (lex.at[-1] != ')')
                ERROR("Expected ')'!");
        }

        if (!components[0])
            ERROR("No components!");

        if (lex.Garbage())
            ERROR("Garbage after components!");
    }

    bool concentration = false;
    char duration[64] = "";
    {
        Simplex lex(spell.duration);

        const char *prefixes[] = {"Concentration, up to", "Up to", 0};

        int prefix = 0;
        if (lex.MatchOne(prefixes, &prefix))
            concentration = (prefix == 0);

        int num = 0;
        if (lex.Num(&num))
        {
            const char *patterns[] = {"round?", "minute?", "hour?", "day?", 0};
            const char *units[] = {"Rounds", "Minutes", "Hours", "Days"};

            int unit = 0;
            if (!lex.MatchOne(patterns, &unit))
                ERROR("Invalid duration!");

            STR_APPEND(duration, "%d, %s", num, units[unit]);
        }
        else
        {
            const char *patterns[] = {
                "Instantaneous", "Until dispelled or triggered",
                "Until dispelled", "Special", 0
            }, *duration_types[] = {
                "Instantaneous", "UntilDispelledOrTriggered",
                "UntilDispelled", "Special"
            };

            int type = 0;
            if (!lex.MatchOne(patterns, &type))
                ERROR("Invalid duration!");

            STR_APPEND(duration, "%s", duration_types[type]);
        }

        if (lex.Garbage())
            ERROR("Garbage after duration!");
    }

    char flags[64] = "";
    {
        char temp[64] = "";
        if (spell.ritual)
            STR_APPEND_SEP(temp, ", ", "Ritual");
        if (concentration)
            STR_APPEND_SEP(temp, ", ", "Concentration");

        if (temp[0])
            STR_APPEND(flags, "  FLAGS(%s)\n", temp);
    }

    FILE *out = (FILE*)user_ptr;
    fprintf(out,
            "{\n"
            "  \"%s\",\n"
            "  \"%s\",\n"
            "  CASTERS(%s),\n"
            "  LEVEL(%d),\n"
            "  SCHOOL(%s),\n"
            "  CASTING_TIME(%s), // %s\n"
            "  RANGE(%s), // %s\n"
            "  COMPONENTS(%s), // %s\n"
            "  DURATION(%s), // %s\n"
            "%s"
            "},\n\n",
            spell.name,
            notes,
            casters,
            spell.level,
            School::ToString(spell.school),
            casting_time, spell.casting_time,
            range, spell.range,
            components, spell.components,
            duration, spell.duration,
            flags);

    return true;
}

#undef STR_APPEND
#undef STR_APPEND_SEP
#undef ERROR


#include <cassert>
int main(int argc, const char **argv)
{
    if (argc < 2)
    {
        printf("Usage: %s <input-json-file> [output-c-file]\n"
               " * If output file is omitted, stdout is used.\n",
               StripPath(argv[0]));
        return 0;
    }

    const char *input_file = argv[1];

    FILE *out = stdout;
    bool out_is_stdout = true;
    if (argc > 2)
    {
        out = fopen(argv[2], "w");
        out_is_stdout = false;

        if (!out)
        {
            LogError("Couldn't write file '%s'.", argv[2]);
            return 1;
        }
    }


    int ret = 0;

    char *file_data = ReadEntireFileAndNullTerminate(input_file);
    if (file_data)
    {
        if (!ParseSpells(file_data, PrintSpell, out))
        {
            LogError("Couldn't parse spells.");
            ret = 1;
        }

        ReleaseEntireFile(file_data);
    }
    else
    {
        LogError("Couldn't read file '%s'.", input_file);
        ret = 1;
    }

    if (!out_is_stdout)
    {
        fclose(out);
    }

    return ret;
}
