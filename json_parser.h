#ifndef JSON_PARSER_H
#define JSON_PARSER_H

namespace json
{

    enum Type
    {
        Type_Int,
        Type_Bool,
        Type_String,
        Type_List,
        Type_Object
    };

    struct Value
    {
        Type type;
        union
        {
            int int_value;
            bool bool_value;
            char *string_value;
            Value *first_list_item;
            struct Field *object_fields;
        };
        Value *list_next;
    };

    struct Field
    {
        char *name;
        Value *value;
        Field *next;
    };

    Value *Parse(char *data);

    void Free(Value *v);

    inline bool IsInt(Value *v)    { return (v->type == Type_Int); }
    inline bool IsBool(Value *v)   { return (v->type == Type_Bool); }
    inline bool IsString(Value *v) { return (v->type == Type_String); }
    inline bool IsList(Value *v)   { return (v->type == Type_List); }
    inline bool IsObject(Value *v) { return (v->type == Type_Object); }

    inline int    GetInt(Value *v)           { return v->int_value; }
    inline bool   GetBool(Value *v)          { return v->bool_value; }
    inline char*  GetString(Value *v)        { return v->string_value; }
    inline Value* GetFirstListItem(Value *v) { return v->first_list_item; }
    inline Value* GetNextListItem(Value *v)  { return v->list_next; }

    Value* GetFieldValue(Value *o, const char *field_name);

    inline bool TryGetIntField(Value *o, const char *field_name, int *result)
    {
        Value *v = GetFieldValue(o, field_name);
        bool ret = (v && IsInt(v));
        if (ret) *result = GetInt(v);
        return ret;
    }
    inline bool TryGetBoolField(Value *o, const char *field_name, bool *result)
    {
        Value *v = GetFieldValue(o, field_name);
        bool ret = (v && IsBool(v));
        if (ret) *result = GetBool(v);
        return ret;
    }
    inline bool TryGetStringField(Value *o, const char *field_name, char **result)
    {
        Value *v = GetFieldValue(o, field_name);
        bool ret = (v && IsString(v));
        if (ret) *result = GetString(v);
        return ret;
    }

} // json

#endif // JSON_PARSER_H
