#include "main.h"


/**
 * _strncpy - copies a string
 * @dest: dest
 * @src: src
 * @n: n
 * Return: strncpy
*/
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
    return (dest);
}