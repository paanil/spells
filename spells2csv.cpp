#include "spell.h"
#include "utils.h"

static const Spell all_spells[] =
{
#include "spells.autogen.inl"
};

struct SpellList
{
    int count;
    int spells[64];
};

int main(int argc, const char **argv)
{
    if (argc < 2)
    {
        const char *exe = StripPath(argv[0]);

        printf("Usage: %s <list-of-casters>\n"
               " * Accepted list items (case doesn't matter):\n"
#define STR(c) "    - " #c "\n"
               MAP(STR, CASTER_LIST)
               "    - All\n"
               "Example: %s cleric paladin\n",
               exe, exe);
        return 0;
    }

    Casters casters;
    for (int i = 1; i < argc; ++i)
    {
        // Copy the argument into the temp buffer
        // with first char upper case and rest lower.
        char temp[20];
        unsigned len = 0;
        const char *at = argv[i];
        temp[len++] = ToUpper(*at++);
        while (*at && len+1 < sizeof(temp))
        {
            temp[len++] = ToLower(*at++);
        }
        temp[len] = 0;

        if (*at == 0)
        {
            // If it matches a caster, set the flag, and continue the loop.
#define IF(c) if (strcmp(temp, #c) == 0) { casters |= Casters::c; continue; }
            MAP(IF, CASTER_LIST);

            if (strcmp(temp, "All") == 0)
            {
                casters.SetAllBits();
                continue;
            }
        }

        LogError("Invalid argument '%s'!", argv[i]);
        return 1;
    }

    SpellList spell_lists[10] = {};
    for (int i = 0; i < (int)ArrayCount(all_spells); ++i)
    {
        Spell spell = all_spells[i];
        if (!(spell.casters & casters)) continue;

        int level = spell.level;
        if (level < 0 || level >= (int)ArrayCount(spell_lists))
        {
            LogError("Invalid spell level %d!", level);
            continue;
        }

        SpellList *list = spell_lists + level;

        int max_count = ArrayCount(list->spells);
        if (list->count >= max_count)
        {
            LogError("More than %d level %d spells!", max_count, level);
            continue;
        }

        list->spells[list->count++] = i;
    }

    for (int level = 0; level < (int)ArrayCount(spell_lists); ++level)
    {
        SpellList *list = spell_lists + level;
        if (list->count == 0) continue;

        printf("Level %d:\n", level);
        printf("Name, CT, Range, Comp, Duration, Notes\n");

        for (int i = 0; i < list->count; ++i)
        {
            int index = list->spells[i];
            Spell spell = all_spells[index];

            // Name
            printf("%s, ", spell.name);

            // Casting time
            printf("%d", spell.casting_time.value);
            switch(spell.casting_time.unit)
            {
                case CastingTime::Action: printf("A"); break;
                case CastingTime::BonusAction: printf("B"); break;
                case CastingTime::Reaction: printf("R"); break;
                case CastingTime::Minutes: printf("min"); break;
                case CastingTime::Hours: printf("h"); break;
                default: printf("???"); LogError("%s casting time!", spell.name);
            }
            printf(", ");

            // Range
            switch(spell.range.unit)
            {
                case Range::Self: printf("Self"); break;
                case Range::Touch: printf("Touch"); break;
                case Range::Sight: printf("Sight"); break;
                case Range::Unlimited: printf("Unlim"); break;
                case Range::Special: printf("Special"); break;
                case Range::Feet: printf("%dft", spell.range.value); break;
                case Range::Miles: printf("%dmi",spell.range.value); break;
                default: printf("???"); LogError("%s range!", spell.name);
            }
            printf(", ");

            // Components
            printf("%s%s%s, ",
                   (spell.components & Components::Verbal) ? "V" : "",
                   (spell.components & Components::Somatic) ? "S" : "" ,
                   (spell.components & Components::Material) ? "M" : "");

            // Duration
            switch(spell.duration.unit)
            {
                case Duration::Instantaneous: printf("Instant"); break;
                case Duration::Rounds: printf("%drounds", spell.duration.value); break;
                case Duration::Minutes: printf("%dmin", spell.duration.value); break;
                case Duration::Hours: printf("%dh", spell.duration.value); break;
                case Duration::Days: printf("%dd", spell.duration.value); break;
                case Duration::UntilDispelled: printf("Dispell"); break;
                case Duration::UntilDispelledOrTriggered: printf("Dis/tri"); break;
                case Duration::Special: printf("Special"); break;
                default: printf("???"); LogError("%s duration!", spell.name);
            }

            if (spell.flags & Flags::Concentration)
                printf(" C");

            printf(", ");

            // Notes
            printf("%s", spell.notes);

            if (spell.flags & Flags::Ritual)
                printf("%sritual", spell.notes[0] ? "; " : "");

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
