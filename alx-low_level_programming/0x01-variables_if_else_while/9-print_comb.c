#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        if (i > 0)
        {
            putchar(',');
            putchar(' ');
        }
        putchar(i + '0');
    }
    putchar('\n');
    return (0);
}