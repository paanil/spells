
#define ArrayCount(a) (sizeof(a)/sizeof(*a))

static char *
ReadEntireFileAndNullTerminate(const char *fname)
{
    char *result = 0;

    FILE *f = fopen(fname, "rb");
    if (f)
    {
        fseek(f, 0, SEEK_END);
        unsigned int file_size = ftell(f);
        result = (char*)malloc(file_size + 1);
        fseek(f, 0, SEEK_SET);
        fread(result, 1, file_size, f);
        result[file_size] = 0;
        fclose(f);
    }

    return result;
}

inline bool
IsNumber(char c)
{
    return ('0' <= c && c <= '9');
}

inline char
ToLower(char c)
{
    return ('A' <= c && c <= 'Z') ? (c - 'A' + 'a') : c;
}

int StringCompare(const char *a, const char *b)
{
    while (*a && *a == *b)
    {
        ++a;
        ++b;
    }
    return (*a - *b);
}

int StringCompareI(const char *a, const char *b)
{
    while (*a && ToLower(*a) == ToLower(*b))
    {
        ++a;
        ++b;
    }
    return (*a - *b);
}

struct Simplex
{
    char *at;

    inline void SkipSpace()
    {
        while (*at == ' ') ++at;
    }

    bool Keyword(const char *kw)
    {
        char *temp = at;

        SkipSpace();
        for (; *at && *kw; ++at, ++kw)
        {
            if (ToLower(*at) != ToLower(*kw))
                break;
        }

        if (*kw == 0)
            return true;

        at = temp;
        return false;
    }

    bool Num(int *result)
    {
        char *temp = at;

        SkipSpace();
        if (IsNumber(*at))
        {
            int num = 0;
            while (IsNumber(*at))
            {
                num *= 10;
                num += *at++ - '0';
            }

            *result = num;
            return true;
        }

        at = temp;
        return false;
    }

    bool Char(char c)
    {
        char *temp = at;

        SkipSpace();
        if (*at++ == c)
            return true;

        at = temp;
        return false;
    }
};
