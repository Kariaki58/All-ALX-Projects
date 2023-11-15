#include "main.h"
#include <stdio.h>

void print_times_table(int n)
{
    int num, i, j;

    if (n > 15 || n < 0)
        return;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            num = i * j;
            if (j > 0)
            {
                _putchar(',');
                _putchar(' ');
            }
            if (num > 99) 
            {
                _putchar((num / 100) + '0');
                _putchar(((num / 10) % 10) + '0');
            }
            else if (num > 9)
            {
                if (j > 0)
                    _putchar(' ');
                _putchar((num / 10) + '0');
            }
            else {
                if (j > 0)
                {
                    _putchar(' ');
                    _putchar(' ');
                }
            }
            _putchar((num % 10) + '0');
        }
        _putchar('\n');
    }
}
