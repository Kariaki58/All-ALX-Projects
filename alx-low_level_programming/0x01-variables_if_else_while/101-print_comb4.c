#include <stdio.h>

int main(void)
{
    int i, j, k;

    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10; j++)
        {
            for (k = j; k < 10; k++)
            {
                if (i == j || i == k || j == k)
                    continue;
                if (k > 2)
                {
                    putchar(',');
                    putchar(' ');
                }
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');
            }
        }
    }
    putchar('\n');
    return (0);
}