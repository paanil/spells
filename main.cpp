#include <cstdio>
#include <cstring>
#include "spell.h"
#include "spell_tables.cpp"
#include "utils.cpp"
#include "json_lexer.cpp"
#include "json_spell_parser.cpp"

#define LogInfo(fmt, ...) fprintf(stdout, "[INFO] " fmt "\n", ##__VA_ARGS__)
#define LogError(fmt, ...) fprintf(stderr, "[ERROR] " fmt "\n", ##__VA_ARGS__)


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

PROCESS_SPELL(PrintSpell)
{
    // Top-level object
    {
        Value val;
        if (GetValue(o, "all_spells", &val))
        {
            return true;
        }
    }

    struct
    {
        int id;
        char *name;
        int level;
        int school;
        char *casting_time;
        char *range;
        char *components;
        char *duration;
        bool ritual;
        bool concentration;
    } spell = {};

#define GET(Type, member) \
    if (!Get##Type(o, #member, &spell.member)) { \
        LogError("Spell doesn't have " #Type "-field '" #member "'!"); \
        return false; \
    }

    GET(Int, id);
    GET(String, name);
    GET(Int, level);
    GET(Int, school);
    GET(Bool, ritual);
    GET(String, casting_time);
    GET(String, range);
    GET(String, components);
    GET(String, duration);
#undef GET

    char temp[1096] = "";
    char notes[256] = "";

#define Print(fmt, ...) do { \
        int len = strlen(temp); \
        snprintf(temp+len, sizeof(temp)-len, fmt, ##__VA_ARGS__); \
    } while(0)
#define PrintNote(fmt, ...) do { \
        int len = strlen(notes); \
        snprintf(notes+len, sizeof(notes)-len, fmt, ##__VA_ARGS__); \
    } while(0)
#define Error(msg, spell_member) do { \
        LogError("%s: \t" msg " \"%s\"", spell.name, spell.spell_member); \
    } while(0)

    // Initial notes
    for (unsigned int i = 0; i < ArrayCount(initial_notes); ++i)
    {
        if (StringCompareI(spell.name, initial_notes[i].spell_name) == 0)
        {
            PrintNote(initial_notes[i].notes);
            break;
        }
    }

    // Name and notes
    Print("{\n"
          "  \"%s\",\n"
          "  \"%%s\",\n",
          spell.name);

    // Casters
    {
        Print("  0");

        for (int i = 0; i < Caster_Count; ++i)
        {
            for (int j = 0; j < MAX_SPELLS_PER_CASTER; ++j)
            {
                int id = spells_by_caster[i][j];
                if (id == spell.id)
                {
                    Print("|%s", caster_names[i]);
                    break;
                }
                else if (id < 0)
                {
                    break;
                }
            }
        }

        Print(",\n");
    }

    // Level and school
    Print("  Level(%d),\n"
          "  %s,\n",
          spell.level,
          spell_schools[spell.school]);

    // Casting time
    {
        Simplex lex = {spell.casting_time};

        int num;
        if (!lex.Num(&num))
            Error("No casting time!", casting_time);

        Print("  CastingTime(%d, ", num);

        if (lex.Keyword("action"))
            Print("Action");
        else if (lex.Keyword("bonus action"))
            Print("BonusAction");
        else if (lex.Keyword("reaction"))
        {
            Print("Reaction");
            // Skip when reaction can be taken.
            while (*lex.at) ++lex.at;
        }
        else if (lex.Keyword("minutes") || lex.Keyword("minute"))
            Print("Minutes");
        else if (lex.Keyword("hours") || lex.Keyword("hour"))
            Print("Hours");
        else
            Error("Weird casting time unit!", casting_time);

        if (*lex.at != 0)
            Error("Garbage after casting time!", casting_time);

        Print("), // %s\n", spell.casting_time);
    }

    // Range
    {
        Print("  Range(");

        Simplex lex = {spell.range};

        int num;
        if (lex.Num(&num))
        {
            Print("%d", num);

            if (lex.Keyword("feet"))
                Print(" Feet");
            else if (lex.Keyword("miles") || lex.Keyword("mile"))
                Print(" Miles");
            else
                Error("Weird range unit!", range);
        }
        else
        {
            if (lex.Keyword("self"))
            {
                Print("Self");

                if (lex.Char('('))
                {
                    bool ok = false;

                    int n;
                    if (lex.Num(&n))
                    {
                        ok = true;

                        if (lex.Keyword("-foot radius"))
                            PrintNote("; %dft radius", n);
                        else if (lex.Keyword("-mile radius"))
                            PrintNote("; %dmi radius", n);
                        else if (lex.Keyword("-foot cone"))
                            PrintNote("; %dft cone", n);
                        else if (lex.Keyword("-foot cube"))
                            PrintNote("; %dft cube", n);
                        else if (lex.Keyword("-foot line"))
                            PrintNote("; %dft line", n);
                        else if (lex.Keyword("-foot-radius sphere"))
                            PrintNote("; %dft-radius sphere", n);
                        else if (lex.Keyword("-foot-radius hemisphere"))
                            PrintNote("; %dft-radius hemisphere", n);
                        else
                            ok = false;

                        ok = (ok && lex.Char(')'));
                    }

                    if (!ok)
                        Error("Expected e.g. '(30-foot radius)' after 'Self'!", range);
                }
            }
            else if (lex.Keyword("touch"))
                Print("Touch");
            else if (lex.Keyword("sight"))
                Print("Sight");
            else if (lex.Keyword("unlimited"))
                Print("Unlimited");
            else if (lex.Keyword("special"))
                Print("Special");
            else
                Error("No range!", range);
        }

        if (*lex.at != 0)
            Error("Garbage after range!", range);

        Print("), // %s\n", spell.range);
    }

    // Components
    {
        Print("  0");

        char *at = spell.components;
        char c[] = {'V', 'S', 'M'};
        const char *s[] = {"|Verbal", "|Somatic", "|Material"};
        bool expecting = true;

        for (int i = 0; i < 3; ++i)
        {
            if (*at == c[i])
            {
                Print(s[i]);
                expecting = false;
                if (*(++at) == ',')
                {
                    if (*(++at) != ' ')
                        Error("Expected space after ','!", components);
                    ++at;
                    expecting = true;
                }
            }
        }

        if (expecting)
            Error("Expected more components!", components);

        if (at[-1] == 'M')
        {
            if (at[0] != ' ')
                Error("Expected space after 'M'!", components);
            if (at[1] != '(')
                Error("Expected materials in parentheses!", components);

            int state = 0;
            while (*at && *at != ')')
            {
                if (state == 0 && IsNumber(*at))
                {
                    Simplex lex = {at};

                    int num;
                    lex.Num(&num);
                    if ((lex.Char(',') && !lex.Num(&num)) ||
                        !lex.Keyword("gp"))
                    {
                        //Error("Expected material cost!", components);
                    }
                    else
                    {
                        PrintNote("; material cost");
                        state = 1;
                    }

                    at = lex.at;
                }
                else if (state == 1 && *at == 'c')
                {
                    Simplex lex = {at};

                    if (lex.Keyword("consumes"))
                    {
                        PrintNote(" (consumed)");
                        state = 2;
                        at = lex.at;
                    }
                    else
                    {
                        ++at;
                    }
                }
                else
                {
                    ++at;
                }
            }

            if (*at != ')')
                Error("Expected ')'!", components);
            else
                ++at;
        }

        if (*at != 0)
            Error("Garbage after components!", components);

        Print(", // %s\n", spell.components);
    }

    // Duration
    {
        Simplex lex = {spell.duration};

        if (lex.Keyword("concentration, up to"))
        {
            spell.concentration = true;
        }
        else if (lex.Keyword("up to"))
        {
            // NOTE(ilari): Nothing to do here.
        }

        int num;
        if (lex.Num(&num))
        {
            Print("  Duration(%d, ", num);

            if (lex.Keyword("rounds") || lex.Keyword("round"))
                Print("Rounds");
            else if (lex.Keyword("minutes") || lex.Keyword("minute"))
                Print("Minutes");
            else if (lex.Keyword("hours") || lex.Keyword("hour"))
                Print("Hours");
            else if (lex.Keyword("days") || lex.Keyword("day"))
                Print("Days");
            else
                Error("Weird duration unit!", duration);

            Print(")");
        }
        else
        {
            Print("  ");

            if (lex.Keyword("instantaneous"))
                Print("Duration_Instantaneous");
            else if (lex.Keyword("until dispelled or triggered"))
                Print("Duration_UntilDispelledOrTriggered");
            else if (lex.Keyword("until dispelled"))
                Print("Duration_UntilDispelled");
            else if (lex.Keyword("special"))
                Print("Duration_Special");
            else
                Error("No duration!", duration);
        }

        if (*lex.at != 0)
            Error("Garbage after duration!", duration);

        Print(", // %s\n", spell.duration);
    }


    // Flags
    {
        Print("  0");

        if (spell.ritual)
            Print("|Ritual");
        if (spell.concentration)
            Print("|Concentration");

        Print("\n");
    }

    Print("},\n\n");

#undef Print
#undef PrintNote
#undef Error

    if (temp[strlen(temp)-4] == '}')
        printf(temp, (notes[0] == ';') ? notes + 2 : notes);
    else
    {
        LogError("Not enough space for spell '%s'!", spell.name);
        return false;
    }

    return true;
}


#if 0
int main()
{
    const char *fname = "spell_db.js";
    char *file_data = ReadEntireFileAndNullTerminate(fname);
    if (!file_data)
    {
        LogError("Couldn't read file '%s'.", fname);
        return 1;
    }

    if (!ParseSpells(file_data, PrintSpell))
    {
        LogError("Couldn't parse spells.");
    }

    free(file_data);
    return 0;

}
#else

static const Spell all_spells[] =
{
#include "spell_list.cpp"
};


int main()
{
#define ForEachSpell(caster) \
    for (int id_index = 0, spell_id; id_index < MAX_SPELLS_PER_CASTER && \
    (spell_id = spells_by_caster[caster][id_index]) >= 0; ++id_index)

    const int max_spells_per_level = 50;

    struct SpellList
    {
        int count;
        int spells[max_spells_per_level];
    };

    SpellList spell_lists[10] = {};

    ForEachSpell(Caster_Paladin)
    {
        int level = all_spells[spell_id].level;
        SpellList *list = spell_lists + level;

        if (list->count == max_spells_per_level)
        {
            LogError("More than %d level %d spells!",
                     max_spells_per_level, level);
            return 1;
        }

        list->spells[list->count++] = spell_id;
    }

    for (unsigned int level = 0; level < ArrayCount(spell_lists); ++level)
    {
        printf(", Level %d:\n", level);
        printf(", Name, CT, Range, Comp, Duration, Notes\n");

        SpellList *list = spell_lists + level;
        for (int i = 0; i < list->count; ++i)
        {
            int id = list->spells[i];
            const Spell *spell = all_spells + id;

            printf("(_), %s", spell->name);
            //if (spell->flags & Ritual)
            //    printf(" (ritual)");

            printf(", %d", spell->casting_time[0]);
            switch(spell->casting_time[1])
            {
                case Action: printf("A"); break;
                case BonusAction: printf("B"); break;
                case Reaction: printf("R"); break;
                case Minutes: printf("min"); break;
                case Hours: printf("h"); break;
                default: printf("???"); LogError("%s casting time!", spell->name);
            }
            printf(", ");

            switch(RangeUnit(spell->range))
            {
                case Self: printf("Self"); break;
                case Touch: printf("Touch"); break;
                case Sight: printf("Sight"); break;
                case Unlimited: printf("Unlim"); break;
                case Special: printf("Special"); break;
                case Feet_: printf("%dft", RangeValue(spell->range)); break;
                case Miles_: printf("%dmi", RangeValue(spell->range)); break;
                default: printf("???"); LogError("%s range!", spell->name);
            }

            printf(", %s%s%s, ",
                   (spell->components & Verbal) ? "V" : "",
                   (spell->components & Somatic) ? "S" : "" ,
                   (spell->components & Material) ? "M" : "");

            switch(spell->duration[1])
            {
                case Instantaneous: printf("Instant"); break;
                case Rounds: printf("%drounds", spell->duration[0]); break;
                case Minutes: printf("%dmin", spell->duration[0]); break;
                case Hours: printf("%dh", spell->duration[0]); break;
                case Days: printf("%dd", spell->duration[0]); break;
                case UntilDispelled: printf("Dispell"); break;
                case UntilDispelledOrTriggered: printf("Dis/tri"); break;
                case Special_: printf("Special"); break;
                default: printf("???"); LogError("%s duration!", spell->name);
            }

            if (spell->flags & Concentration)
                printf(" C");

            printf(", %s", spell->notes);

            if (spell->flags & Ritual)
                printf("%sritual", spell->notes[0] ? "; " : "");

            //if (spell->duration[1] == UntilDispelled)
            //    printf("; until dispelled");
            //if (spell->duration[1] == UntilDispelledOrTriggered)
            //    printf("; until dispelled or triggered");

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}

#endif
