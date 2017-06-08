#include "utils.h"
#include <cstdio>
#include <cstdlib>

char *ReadEntireFileAndNullTerminate(const char *file_name)
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

void ReleaseEntireFile(char *file_data)
{
    free(file_data);
}
