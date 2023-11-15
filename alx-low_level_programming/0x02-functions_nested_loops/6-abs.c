#include <stdio.h>
#include "main.h"

/**
 * _abs - absolute value of an integer.
 * @x: x
 * Return: abs(x).
*/
int _abs(int x)
{
    if (x < 0)
        x *= -1;
    return (x);
}