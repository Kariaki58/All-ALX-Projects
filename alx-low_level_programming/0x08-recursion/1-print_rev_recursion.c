#include "main.h"
#include <stdio.h>


/**
 * _print_rev_recursion - prints a string in reverse
 * @s:
*/
void _print_rev_recursion(char *s)
{
	if (!(*s))
		return;
	_print_rev_recursion(s + 1);
	putchar(*s);
}
