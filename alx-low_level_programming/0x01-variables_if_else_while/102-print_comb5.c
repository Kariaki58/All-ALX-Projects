#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i < 100; i++)
    {
        for (j = i; j < 100; j++)
        {
            if (i == j)
                continue;
            putchar((i / 10) + '0');
            putchar((i % 10) + '0');
            putchar(' ');
            putchar((j / 10) + '0');
            putchar((j % 10) + '0');
            if ((j % 10) == 9 && (i % 9) == 8)
                break;
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return (0);
}