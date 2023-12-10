#include "main.h"
#include <stdio.h>


/**
 * print_line - draws a straight line in terminal
 * @n: number of _ times
*/
void print_line(int n)
{
    int i;

    if (n <= 0)
        return;
    for (i = 0; i < n; i++)
    {
        putchar('_');
    }
    putchar('\n');
}