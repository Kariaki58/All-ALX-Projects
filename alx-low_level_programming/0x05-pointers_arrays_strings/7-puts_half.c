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
 * puts2_half - print half of a string
*/
void puts_half(char *str)
{
    int len;

    len = (_strlen2(str) - 1) / 2;
    len++;
    while (str[len] != '\0')
    {
        printf("%c", str[len]);
        len++;
    }
}