#include "main.h"
#include <stdio.h>


/**
 * _strlen_recursion - return the length of a string
 * @s: s
 * Return: strlen(@s)
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
