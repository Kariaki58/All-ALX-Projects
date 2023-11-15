#include <stdio.h>
#include "main.h"

void get_alpha(void)
{
    char i;

    for (i = 'a'; i <= 'z'; i++)
    {
        _putchar(i);
    }
}
void print_alphabet_x10(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        get_alpha();
        _putchar('\n');
    }
}