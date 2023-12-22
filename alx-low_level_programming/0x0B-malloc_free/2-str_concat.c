#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: s1
 * @s2: s2
 * Return: strcat of s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *strconcat;
	int len1, len2;
	int i, j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	i = 0;
	strconcat = malloc(sizeof(char) * len1 + len2);
	while (i < len1)
	{
		strconcat[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		strconcat[i] = s2[j];
		i++;
		j++;
	}
	strconcat[i++] = '\0';
	return (strconcat);
}
