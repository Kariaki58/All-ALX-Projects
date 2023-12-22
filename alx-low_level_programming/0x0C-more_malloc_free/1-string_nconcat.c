#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - string nconcat
 * @s1: s1
 * @s2: s2
 * @n: n
 * Return: new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	concat = malloc((sizeof(char) * strlen(s1)) + n + 1);
	if (!concat)
		return (NULL);
	j = 0;
	for (i = 0; s1[i] != '\0'; i++)
		concat[j++] = s1[i];
	for (i = 0; i < n; i++)
		concat[j++] = s2[i];
	concat[j] = '\0';
	return (concat);
}
