#include "main.h"
#include <stdio.h>


void zero_to_14(void)
{
    int i;

    for (i = 0; i < 15; i++)
    {
        printf("%d", i);
    }
    putchar('\n');
}
/**
 * more_numbers - prints 10 times 0 to 14
*/
void more_numbers(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        zero_to_14();
    }
    putchar('\n');
}