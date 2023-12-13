#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: src
*/
char *_strcat(char *dest, char *src)
{
    int i, len1, len2;

    i = 0;
    len1 = strlen(dest);
    len2 = strlen(src);
    while (i < len2)
    {
        dest[len1] = src[i];
        len1++;
        i++;
    }
    return dest;
}