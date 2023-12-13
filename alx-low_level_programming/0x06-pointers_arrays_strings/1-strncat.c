#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: src
 * @n:
 * Return - a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int len1, i;

	len1 = strlen(dest);
	i = 0;
	while (i < n)
	{
		dest[len1] = src[i];
		i++;
		len1++;
	}
	return dest;
}
