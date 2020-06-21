#include "stdfunc.h"

int strlen(char str[])
{
    int c = 0;
    while (str[c] != '\0')
        c++;

    return c;
}

void string_cat(char *dest, const char *src)
{
    int i,j;
    for (i = 0; dest[i] != '\0'; i++)
        ;
    for (j = 0; src[j] != '\0'; j++)
        dest[i+j] = src[j];
    return dest;
}