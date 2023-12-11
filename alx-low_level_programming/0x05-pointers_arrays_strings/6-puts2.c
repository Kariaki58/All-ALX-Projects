#include "main.h"
#include <stdio.h>


void puts2(char *str)
{
    while (*str)
    {
        putchar(*str);
        str = str + 2;
    }
    
}