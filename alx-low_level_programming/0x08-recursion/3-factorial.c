#include "main.h"
#include <stdio.h>


/**
 * factoirial - factorial of a given number
 * @n: n
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return n * factorial(n - 1);
}
