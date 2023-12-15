#include "main.h"
#include <stdio.h>


/**
 * string_toupper - lowercase to uppercase
 * Return: string
*/
char *string_toupper(char *str)
{
    int i = 0, str_to_int;

	while (str[i])
	{
		str_to_int = str[i];
		if (str_to_int >= 97 && str_to_int <= 122)
		{
			str_to_int -= 32;
			str[i] = str_to_int;
		}
		i++;
	}
    return (str);
}