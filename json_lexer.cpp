
namespace json
{

    enum Tok
    {
        Tok_End,
        Tok_Int,
        Tok_Bool,
        Tok_Double,
        Tok_String,
        Tok_ID,
        Tok_Comma,
        Tok_OpenObject,
        Tok_CloseObject,
        Tok_OpenList,
        Tok_CloseList,
        Tok_Invalid,
    };

    struct Token
    {
        Tok type;
        union
        {
            int int_value;
            bool bool_value;
            double double_value;
            char *string_value;
        };
    };

    struct Lexer
    {
        char *at;
    };

    bool ParseKeyword(Lexer *lex, const char *kw)
    {
        Lexer temp = *lex;
        char c = *temp.at;
        while (*kw && c == *kw++)
        {
            c = *(++temp.at);
        }

        if (*kw)
        {
            return false;
        }

        *lex = temp;
        return true;
    }

    Token NextToken(Lexer *lex)
    {
        char c = *lex->at;
        while (c == ' ' || c == '\t' ||
               c == '\r' || c == '\n')
        {
            c = *(++lex->at);
        }

        switch (c)
        {
            case 0: return {Tok_End};

            case '-':
            case '0'...'9':
            {
                int sign = 1;
                if (c == '-')
                {
                    sign = -1;
                    if (!IsNumber(lex->at[1]))
                        return {Tok_Invalid};
                    c = *(++lex->at);
                }

                Token tok = {Tok_Int};
                while (IsNumber(c))
                {
                    tok.int_value *= 10;
                    tok.int_value += c - '0';
                    c = *(++lex->at);
                }

                if (c == '.')
                {
                    // TODO(ilari): Parse double value!
                }

                tok.int_value *= sign;
                return tok;
            }

            case 't':
            {
                if (ParseKeyword(lex, "true"))
                {
                    Token tok = {Tok_Bool};
                    tok.bool_value = true;
                    return tok;
                }
                return {Tok_Invalid};
            }

            case 'f':
            {
                if (ParseKeyword(lex, "false"))
                {
                    Token tok = {Tok_Bool};
                    tok.bool_value = false;
                    return tok;
                }
                return {Tok_Invalid};
            }

            case '"':
            {
                Lexer temp = *lex;

                Token tok = {Tok_String};
                tok.string_value = ++temp.at;

                c = *temp.at;
                while (c && c != '"')
                {
                    if (c == '\\')
                    {
                        ++temp.at;
                    }
                    c = *(++temp.at);
                }

                if (c == '"')
                {
                    *temp.at++ = 0;
                    if (*temp.at == ':')
                    {
                        ++temp.at;
                        tok.type = Tok_ID;

                        *lex = temp;
                        return tok;
                    }

                    *lex = temp;
                    return tok;
                }

                return {Tok_Invalid};
            }

            case ',': ++lex->at; return {Tok_Comma};
            case '{': ++lex->at; return {Tok_OpenObject};
            case '}': ++lex->at; return {Tok_CloseObject};
            case '[': ++lex->at; return {Tok_OpenList};
            case ']': ++lex->at; return {Tok_CloseList};

            default: return {Tok_Invalid};
        }
    }

} // json

using json::Lexer;
using json::Token;
using json::Tok_End;
using json::Tok_Int;
using json::Tok_Bool;
using json::Tok_Double;
using json::Tok_String;
using json::Tok_ID;
using json::Tok_Comma;
using json::Tok_OpenObject;
using json::Tok_CloseObject;
using json::Tok_OpenList;
using json::Tok_CloseList;
