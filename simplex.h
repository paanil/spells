#ifndef SIMPLEX_H
#define SIMPLEX_H

#include "utils.h"

/* "Simple lexer" used by the custom spell
   processing function PrintSpell in json2c.cpp. */
struct Simplex
{
    const char *at;

    explicit Simplex(const char *init)
        : at(init) {}

    inline void SkipSpace()
    { while (IsSpace(*at)) ++at; }

    inline bool Garbage()
    {
        SkipSpace();
        return (*at != 0);
    }

    /* Wrapper returned by all the LEX methods.
       If the method fails, the following calls
       to LEX methods via the wrapper do nothing. */
    struct LexResult
    {
        bool status;
        Simplex *lex;

        inline operator bool ()
        { return status; }

#define WRAP1(Name, t1, p1) inline LexResult Name(t1 p1) { \
            if(status) return lex->Name(p1); return {}; \
        }
#define WRAP2(Name, t1, p1, t2, p2) inline LexResult Name(t1 p1, t2 p2) { \
            if(status) return lex->Name(p1, p2); return {}; \
        }

        WRAP1(Char, char, c);
        WRAP1(Num, int*, result);
        WRAP2(MatchOne, const char**, patterns, int*, match_index);

#undef WRAP1
#undef WRAP2
    };

#define LEX(Name, ...) LexResult Name(__VA_ARGS__)
#define LEX_START() const char *temp_ = at
#define LEX_OK() return {true, this}
#define LEX_FAIL() do { at = temp_; return {}; } while(0)

    LEX(Char, char c)
    {
        LEX_START();
        SkipSpace();
        if (*at++ != c)
            LEX_FAIL();
        LEX_OK();
    }

    LEX(Num, int *result)
    {
        LEX_START();
        SkipSpace();
        if (!IsNumber(*at))
            LEX_FAIL();

        int num = 0;
        while (IsNumber(*at))
        {
            num *= 10;
            num += *at++ - '0';
        }

        *result = num;
        LEX_OK();
    }

    /* Tries to match one of the provided patterns to the input.
       First match's index is returned via the match_index pointer.
       The array of pattern strings must end with a null pointer.
       If a pattern ends with '?', the input may contain optional 's'.

       Example:
       ---
       const char *input = "Kala kukkos";
       Simplex lex(input);
       const char *patterns[] = {"kukko?", "Kala?", 0};
       int index1, index2;
       if (lex.MatchOne(patterns, &index1).MatchOne(patterns, &index2))
       {
           printf("index1 = %d\n", index1); // index1 = 1
           printf("index2 = %d\n", index2); // index2 = 0
       }
    */
    LEX(MatchOne, const char **patterns, int *match_index)
    {
        LEX_START();
        SkipSpace();
        for (int i = 0; patterns[i]; ++i)
        {
            const char *p = patterns[i];
            const char *c = at;

            while (*p && *c == *p)
            {
                ++c;
                ++p;
            }

            if (*p == '?')
            {
                if (*c == 's') ++c;
                ++p;
            }

            if (*p == 0)
            {
                at = c;

                *match_index = i;
                LEX_OK();
            }
        }
        LEX_FAIL();
    }

#undef LEX
#undef LEX_START
#undef LEX_OK
#undef LEX_FAIL
};


#endif // SIMPLEX_H
