# spells

Converts spells from JSON to C to CSV.

    Usage: jsonspells2c <input-json-file> [output-c-file]
     * If output file is omitted, stdout is used.

jsonspells2c reads given JSON-file and outputs a C-file
that is #included by spells2csv.

    Usage: spells2csv <list-of-casters>
     * Accepted list items (case doesn't matter):
        - Bard
        - Cleric
        - Druid
        - Paladin
        - Ranger
        - Sorcerer
        - Warlock
        - Wizard
        - All
    Example: spells2csv cleric paladin

spells2csv outputs CSV of all the spells of the given
spell caster classes grouped by spell level.

The example.json file contains one made up spell.
