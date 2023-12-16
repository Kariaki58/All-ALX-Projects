#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: b
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr)
		return (ptr);
	exit(98);
}
