#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - entry point
 * Return: 0.
*/

int main(void)
{
    unsigned long int a, b, c, i, sum;

    a = 1, b = 2;
    for (i = 0; i < sqrt(4000000); i++)
    {
        c = a + b;
        a = b;
        b = c;
        if (c > 4000000)
            break;
        if (!(c % 2))
            sum += c;
    }
    printf("%ld\n", sum + 2);
    putchar('\n');
    return (0);
}