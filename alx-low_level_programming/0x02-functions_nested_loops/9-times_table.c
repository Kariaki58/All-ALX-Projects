#include "main.h"
#include <stdio.h>

void times_table(void)
{
    int num, i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            num = i * j;
            if (j > 0)
            {
                _putchar(',');
                _putchar(' ');
            }
            if (num > 9)
            {
                _putchar((num / 10) + '0');
                _putchar((num % 10) + '0');
            }
            else {
                if (j > 0)
                    _putchar(' ');
                _putchar(num + '0');
            }
        }
        _putchar('\n');
    }
}
