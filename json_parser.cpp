#include "json_parser.h"
#include "utils.h"

#define ERROR(msg, ...) do { \
    LogError(msg "\n", ##__VA_ARGS__); \
    Free(result); \
    return nullptr; } while(0)

using namespace json;

struct Parser
{
    char *at;

    inline char Peek() { return *at; }
    inline void SkipOne() { ++at; }
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

    Value *ParseValue()
    {
        if (Peek() == 0)
            return nullptr;

        Value *result = Allocate<Value>(AF_ClearToZero);

        SkipWhitespace();

        switch (Peek())
        {
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

                int value = 0;
                while (IsNumber(Peek()))
                {
                    value = value*10 + Peek() - '0';
                    SkipOne();
                }
                value *= sign;

                result->type = Type_Int;
                result->int_value = value;
                break;
            }

            case 't':
            {
                if (!ParseKeyword("true"))
                    ERROR("Expected 'true'!");
                result->type = Type_Bool;
                result->bool_value = true;
                break;
            }

            case 'f':
            {
                if (!ParseKeyword("false"))
                    ERROR("Expected 'false'!");
                result->type = Type_Bool;
                result->bool_value = false;
                break;
            }

            case '"':
            {
                char *str = ParseString();
                if (!str)
                    ERROR("Unterminated string!");
                result->type = Type_String;
                result->string_value = str;
                break;
            }

            case '[':
            {
                SkipOne();
                SkipWhitespace();

                result->type = Type_List;
                Value *tail = result;

                if (Peek() != ']')
                {
                    while (Peek())
                    {
                        Value *value = ParseValue();
                        if (!value)
                            ERROR("Expected list item!");

                        tail->list_next = value;
                        tail = value;

                        SkipWhitespace();

                        if (Peek() == ']') break;
                        if (!Accept(','))
                            ERROR("Expected ','!");
                    }
                }

                if (!Accept(']'))
                    ERROR("Unterminated list!");

                result->first_list_item = result->list_next;
                result->list_next = nullptr;
                break;
            }

            case '{':
            {
                SkipOne();
                SkipWhitespace();

                result->type = Type_Object;

                Field field_list = {};
                Field *tail = &field_list;

                if (Peek() != '}')
                {
                    while (Peek())
                    {
                        Field *field = Allocate<Field>(AF_ClearToZero);
                        if (!result->object_fields)
                            result->object_fields = field;

                        field->name = ParseString();
                        if (!field->name)
                            ERROR("Expected field name!");

                        SkipWhitespace();

                        if (!Accept(':'))
                            ERROR("Expected ':'!");

                        field->value = ParseValue();
                        if (!field->value)
                            ERROR("Expected field value!");

                        tail->next = field;
                        tail = field;

                        SkipWhitespace();

                        if (Peek() == '}') break;
                        if (!Accept(','))
                            ERROR("Expected ','!");

                        SkipWhitespace();
                    }
                }

                if (!Accept('}'))
                    ERROR("Unterminated object!");

                break;
            }

            default:
            {
                ERROR("Unexpected char '%c'!", Peek());
            }
        }

        return result;
    }
};



namespace json
{

    Value *Parse(char *data)
    {
        Parser p = {data};
        Value *result = p.ParseValue();
        if (!result)
            return nullptr;
        p.SkipWhitespace();
        if (*p.at != 0)
            ERROR("Garbage at the end of the data!");
        return result;
    }

    void Free(Value *v)
    {
        if (!v)
            return;

        switch (v->type)
        {
            case Type_Int: break;
            case Type_Bool: break;
            case Type_String: break;
            case Type_List:
            {
                Free(v->first_list_item);
                break;
            }
            case Type_Object:
            {
                Field *field = v->object_fields;
                while (field)
                {
                    Field *next = field->next;
                    Free(field->value);
                    free(field);
                    field = next;
                }
                break;
            }
        }

        Free(v->list_next);
        free(v);
    }

    Value* GetFieldValue(Value *o, const char *field_name)
    {
        assert(o->type == Type_Object);
        Field *field = o->object_fields;
        while (field)
        {
            if (strcmp(field->name, field_name) == 0)
                return field->value;
            field = field->next;
        }
        return nullptr;
    }

} // json
