#ifndef UTILS_H
#define UTILS_H

#include <cstdlib>
#include <cstring>
#include <cassert>
#include <cstdio>
#include <cstdint>

#define LogError(fmt, ...) fprintf(stderr, "[ERROR] " fmt "\n", ##__VA_ARGS__)

#define ArrayCount(a) (sizeof(a)/sizeof(*a))


inline char *ReadEntireFileAndNullTerminate(const char *file_name)
{
    char *result = 0;

    FILE *f = fopen(file_name, "rb");
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
inline void ReleaseEntireFile(char *file_data)
{
    free(file_data);
}


enum //AllocFlags
{
    AF_None = 0,
    AF_ClearToZero = 0x1,
};
template<class T> T *Allocate(int flags)
{
    void *ptr = malloc(sizeof(T));
    assert((uintptr_t(ptr) & (alignof(T)-1)) == 0);
    if (flags & AF_ClearToZero)
        memset(ptr, 0, sizeof(T));
    return (T*)ptr;
}


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
