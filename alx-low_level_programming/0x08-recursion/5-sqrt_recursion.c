#include "main.h"
#include <stdio.h>

int square(int a, int b, int n);
/**
 * square - the square of a number
 * @a: a
 * @b: b
 * Return: number square
 */
int square(int a, int b, int n)
{
	if (b == 0)
		return (-1);
	if (a * a == n)
		return (a);
	return square (a + 1, b - 1, n);
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n: n
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	int input_n, output;

	if (n < 0)
		return (-1);
	input_n = n;
	if (n > 4)
		input_n /= 4;
	output = square(1, input_n, n);
	return (output);
}
