
enum Type
{
    Type_None,
    Type_Int,
    Type_Bool,
    Type_String,
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

struct SpellObject
{
    int field_count;
    Field fields[11];
};

bool GetValue(SpellObject *o, const char *field_name, Value *result)
{
    for (int i = 0; i < o->field_count; ++i)
    {
        if (StringCompare(o->fields[i].name, field_name) == 0)
        {
            *result = o->fields[i].value;
            return true;
        }
    }
    return false;
}

bool GetInt(SpellObject *o, const char *field_name, int *result)
{
    Value val;
    if (GetValue(o, field_name, &val))
    {
        if (val.type == Type_Int)
        {
            *result = val.int_value;
            return true;
        }
    }
    return false;
}

bool GetBool(SpellObject *o, const char *field_name, bool *result)
{
    Value val;
    if (GetValue(o, field_name, &val))
    {
        if (val.type == Type_Bool)
        {
            *result = val.bool_value;
            return true;
        }
    }
    return false;
}

bool GetString(SpellObject *o, const char *field_name, char **result)
{
    Value val;
    if (GetValue(o, field_name, &val))
    {
        if (val.type == Type_String)
        {
            *result = val.string_value;
            return true;
        }
    }
    return false;
}


#define PROCESS_SPELL(func_name) bool func_name(SpellObject *o)
typedef PROCESS_SPELL(spell_processor_func);

struct Parser
{
    Lexer *lex;
    Token peeked;
    spell_processor_func *process_spell;
};

Token NextToken(Parser *p)
{
    Token result = p->peeked;
    p->peeked = NextToken(p->lex);
    return result;
}

Token PeekToken(Parser *p)
{
    return p->peeked;
}

Value ParseValue(Parser *p)
{
    Token tok = NextToken(p);
    switch (tok.type)
    {
        case Tok_Int:
        {
            Value val = {Type_Int};
            val.int_value = tok.int_value;
            return val;
        }

        case Tok_Bool:
        {
            Value val = {Type_Bool};
            val.bool_value = tok.bool_value;
            return val;
        }

        case Tok_String:
        {
            Value val = {Type_String};
            val.string_value = tok.string_value;
            return val;
        }

        case Tok_OpenObject:
        {
            SpellObject o = {};
            tok = NextToken(p);
            while (tok.type != Tok_CloseObject)
            {
                if (tok.type != Tok_ID)
                    return {Type_Invalid};
                if (o.field_count == 11)
                    return {Type_Invalid};

                Field *field = o.fields + o.field_count++;
                field->name = tok.string_value;
                field->value = ParseValue(p);

                if (field->value.type == Type_Invalid)
                    return {Type_Invalid};

                tok = NextToken(p);
                if (tok.type == Tok_Comma)
                    tok = NextToken(p);
            }

            if (!p->process_spell(&o))
                return {Type_Invalid};

            return {Type_None};
        }

        case Tok_OpenList:
        {
            while (PeekToken(p).type != Tok_CloseList)
            {
                if (ParseValue(p).type == Type_Invalid)
                    return {Type_Invalid};
                if (PeekToken(p).type == Tok_Comma)
                    NextToken(p);
            }
            NextToken(p);
            return {Type_None};
        }

        default: return {Type_Invalid};
    }
}

bool ParseSpells(char *data, spell_processor_func *callback)
{
    Lexer lex = {data};
    while (*lex.at && *lex.at != '{') ++lex.at;

    Parser p = {&lex};
    p.process_spell = callback;

    NextToken(&p);
    return (ParseValue(&p).type != Type_Invalid);
}
