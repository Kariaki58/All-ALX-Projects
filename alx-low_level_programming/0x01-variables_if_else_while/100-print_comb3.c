#include <stdio.h>

/**
 * main - entry point
 * Return: return 0.
*/
int main(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10; j++)
        {
            if (i == j)
                continue;
            if (j > 1)
            {
                putchar(',');
                putchar(' ');
            }
            putchar(i + '0');
            putchar(j + '0');
        }
    }
    putchar('\n');
    return (0);
}