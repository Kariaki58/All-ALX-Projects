#include "main.h"


/**
 * _strlen - returns the length of a string
 * @s: strlen
*/
int _strlen(char *s)
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
