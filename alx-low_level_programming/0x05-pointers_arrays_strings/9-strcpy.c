#include "main.h"
#include <string.h>

/**
 * _strcpy - copy string from scr to dest
 * @dest: destination
 * @src: source
 * Return: strcpy
*/
char *_strcpy(char *dest, char *src)
{
    int len, i;

    len = strlen(src);
    for (i = 0; i < len; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
