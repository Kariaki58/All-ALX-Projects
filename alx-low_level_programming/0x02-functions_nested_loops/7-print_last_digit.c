#include "main.h"
#include <stdlib.h>

int print_last_digit(int x)
{
    if (x < 0)
        x *= -1;
    _putchar((x % 10) + '0');
    return (x % 10);
}
