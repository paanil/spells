#ifndef UTILS_H
#define UTILS_H

#define LogError(fmt, ...) fprintf(stderr, "[ERROR] " fmt "\n", ##__VA_ARGS__)

#define ArrayCount(a) (sizeof(a)/sizeof(*a))

char *ReadEntireFileAndNullTerminate(const char *file_name);
void ReleaseEntireFile(char *file_data);


inline bool IsNumber(char c)
{
    return ('0' <= c && c <= '9');
}

inline bool IsSpace(char c)
{
    return (c == ' ' || c == '\t' ||
            c == '\r' || c == '\n');
}

inline char ToLower(char c)
{
    return ('A' <= c && c <= 'Z') ? (c - 'A' + 'a') : c;
}

inline char ToUpper(char c)
{
    return ('a' <= c && c <= 'z') ? (c - 'a' + 'A') : c;
}

/* Returns pointer to the first char after the
   last path separator in the given string. */
inline const char *StripPath(const char *str)
{
    const char *result = str;
    for (const char *at = str; *at; ++at)
    {
        if (*at == '/' || *at == '\\') result = at + 1;
    }
    return result;
}

#endif // UTILS_H
