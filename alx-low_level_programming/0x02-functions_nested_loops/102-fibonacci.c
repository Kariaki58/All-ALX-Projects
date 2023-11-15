#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned long int a, b, c, i;

    a = 1;
    b = 2;
    printf("%ld, %ld, ", a, b);
    for (i = 2; i < 50; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%ld", c);
        if (i < 49)
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
}