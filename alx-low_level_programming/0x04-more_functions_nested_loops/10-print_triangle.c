#include "main.h"
#include <stdio.h>


/**
 * print_triangle - print triangle
*/
void print_triangle(int size)
{
    int i, j, k;

    if (size <= 0)
    {
        putchar('\n');
        return;
    }
    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            putchar(' ');
        }
        for (k = 0; k < i + 1; k++)
        {
            putchar('#');
        }
        putchar('\n');
    }
}
