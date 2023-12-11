#include <stdio.h>
#include "main.h"


/**
 * _strlen2 - returns the length of a string
 * @s: strlen
*/
int _strlen2(char *s)
{
    int len;

    len = 0;

    while (*s)
    {
        len++;
        s++;
    }
    return (len);
}

/**
 * rev_string - reverse a string
 * @s: string
*/
void rev_string(char *s)
{
    int len, start;
    len = _strlen2(s) - 1;
    start = 0;
    while (start < len)
    {
        char tmp;
        tmp = s[start];
        s[start] = s[len];
        s[len] = tmp;
        start++;
        len--;
    }
}