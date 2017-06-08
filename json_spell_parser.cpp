#include "json_spell_parser.h"
#include "utils.h"
#include <cstring>
#include <cstdio>

enum Type
{
    Type_Int,
    Type_Bool,
    Type_String,
    Type_List,
    Type_Object,
    Type_Invalid,
};

struct Value
{
    Type type;
    union
    {
        int int_value;
        bool bool_value;
        char *string_value;
    };
};

struct Field
{
    char *name;
    Value value;
};

struct Object
{
    int field_count;
    Field fields[11];
};


bool GetValue(Object *o, const char *field_name, Value *result)
{
    for (int i = 0; i < o->field_count; ++i)
    {
        if (strcmp(o->fields[i].name, field_name) == 0)
        {
            *result = o->fields[i].value;
            return true;
        }
    }
    return false;
}

bool GetInt(Object *o, const char *field_name, int *result)
{
    Value val;
    if (GetValue(o, field_name, &val) && val.type == Type_Int)
    {
        *result = val.int_value;
        return true;
    }
    return false;
}

bool GetBool(Object *o, const char *field_name, bool *result)
{
    Value val;
    if (GetValue(o, field_name, &val) && val.type == Type_Bool)
    {
        *result = val.bool_value;
        return true;
    }
    return false;
}

bool GetString(Object *o, const char *field_name, char **result)
{
    Value val;
    if (GetValue(o, field_name, &val) && val.type == Type_String)
    {
        *result = val.string_value;
        return true;
    }
    return false;
}

/* The actual (very limited) JSON parser.
   Calls the user defined spell processing function
   every time a spell object is encountered. */
struct Parser
{
    char *at;

    spell_processing_func *process_spell;
    void *user_ptr;

    //
    // Methods
    //

    inline char Peek()
    {
        return *at;
    }

    inline void SkipOne()
    {
        ++at;
    }

    inline bool Accept(char c)
    {
        if (*at == c)
        {
            ++at;
            return true;
        }
        return false;
    }

    inline void SkipWhitespace()
    {
        while (IsSpace(*at)) ++at;
    }

    inline bool ParseKeyword(const char *kw)
    {
        for (; *kw && *at == *kw; ++at, ++kw);
        return (*kw == 0);
    }

    /* Expects string in double quotes.
       Returns the string w/o the quotes,
       or 0 if there wasn't a string. */
    inline char *ParseString()
    {
        if (*at == '"')
        {
            char *str = ++at;

            for (; *at && *at != '"'; ++at)
            {
                if (*at == '\\')
                {
                    if (at[1]) ++at;
                    else break;
                }
            }

            if (*at == '"')
            {
                *at++ = 0;
                return str;
            }
        }

        return 0;
    }


    bool ProcessSpell(Object *o)
    {
        SpellObject spell = {};

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

        return process_spell(spell, user_ptr);
    }


#define ERROR(msg, ...) do { \
        LogError(msg "\n", ##__VA_ARGS__); \
        return {Type_Invalid}; \
    } while(0)


    Value ParseValue()
    {
        SkipWhitespace();

        switch (Peek())
        {
            case 0:
            {
                return {Type_Invalid};
            }

            case '-':
            case '0'...'9':
            {
                int sign = 1;
                if (Accept('-'))
                {
                    sign = -1;
                    if (!IsNumber(Peek()))
                        ERROR("Expected number after '-'!");
                }

                Value val = {Type_Int};
                while (IsNumber(Peek()))
                {
                    val.int_value *= 10;
                    val.int_value += Peek() - '0';
                    SkipOne();
                }

                val.int_value *= sign;
                return val;
            }

            case 't':
            {
                if (!ParseKeyword("true"))
                    ERROR("Expected 'true'!");

                Value val = {Type_Bool};
                val.bool_value = true;
                return val;
            }

            case 'f':
            {
                if (!ParseKeyword("false"))
                    ERROR("Expected 'false'!");

                Value val = {Type_Bool};
                val.bool_value = false;
                return val;
            }

            case '"':
            {
                char *str = ParseString();
                if (!str)
                    ERROR("Unterminated string!");

                Value val = {Type_String};
                val.string_value = str;
                return val;
            }

            case '[':
            {
                SkipOne();
                SkipWhitespace();

                if (Peek() != ']')
                {
                    while (Peek())
                    {
                        Value val = ParseValue();
                        if (val.type == Type_Invalid)
                        {
                            return {Type_Invalid};
                        }

                        SkipWhitespace();

                        if (Peek() == ']') break;
                        if (!Accept(','))
                            ERROR("Expected ','!");
                    }
                }

                if (!Accept(']'))
                    ERROR("Unterminated list!");

                return {Type_List};
            }

            case '{':
            {
                SkipOne();
                SkipWhitespace();

                Object o = {};

                if (Peek() != '}')
                {
                    while (Peek())
                    {
                        Field field = {};
                        field.name = ParseString();
                        if (!field.name)
                            ERROR("Expected field name!");

                        SkipWhitespace();

                        if (!Accept(':'))
                            ERROR("Expected ':'!");

                        field.value = ParseValue();
                        if (field.value.type == Type_Invalid)
                        {
                            return {Type_Invalid};
                        }

                        if (o.field_count < (int)ArrayCount(o.fields))
                        {
                            o.fields[o.field_count++] = field;
                        }

                        SkipWhitespace();

                        if (Peek() == '}') break;
                        if (!Accept(','))
                            ERROR("Expected ','!");

                        SkipWhitespace();
                    }
                }

                if (!Accept('}'))
                    ERROR("Unterminated object!");

                if (!ProcessSpell(&o))
                {
                    return {Type_Invalid};
                }

                return {Type_Object};
            }

            default:
            {
                ERROR("Unexpected char '%c'!", Peek());
            }
        }

        return {Type_Invalid};
    }
#undef ERROR

};


bool ParseSpells(char *data, spell_processing_func *callback, void *user_ptr)
{
    Parser p = {};
    p.at = data;
    p.process_spell = callback;
    p.user_ptr = user_ptr;

    Value val = p.ParseValue();
    if (val.type != Type_Invalid)
    {
        p.SkipWhitespace();
        if (*p.at == 0) return true;
        LogError("Garbage at the end of the data!");
    }
    return false;
}
