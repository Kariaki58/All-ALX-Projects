#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - entry point
 * Return: return 0.
*/
int main(void)
{
    unsigned int i;
    char *content = "_putchar";

    for (i = 0; i < strlen(content); i++)
    {
        _putchar(content[i]);
    }
    _putchar('\n');
    return (0);
}
