#include "main.h"
#include <stdio.h>


/**
 * _puts_recursion - prints a string
 * @s: s
*/
void _puts_recursion(char *s)
{
    if (*s == '\0')
        return;
    putchar(*s);
    _puts_recursion(s + 1);
}
