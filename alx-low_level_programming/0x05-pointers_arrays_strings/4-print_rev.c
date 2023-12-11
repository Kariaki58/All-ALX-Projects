#include "main.h"
#include <stdio.h>

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
 * print_rev - print string in reverse
 * @s: string
*/
void print_rev(char *s)
{
    int len;

    len = _strlen2(s);
    while (len--)
    {
        putchar(s[len]);
    }
    
}
