#ifndef JSON_SPELL_PARSER_H
#define JSON_SPELL_PARSER_H

struct SpellObject
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
};

#define PROCESS_SPELL(func_name) bool func_name(SpellObject &spell, void *user_ptr)
typedef PROCESS_SPELL(spell_processing_func);

bool ParseSpells(char *data, spell_processing_func callback, void *user_ptr);

#endif // JSON_SPELL_PARSER_H
