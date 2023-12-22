#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 * Return: 0 || 1
*/
int main(int argc, char **argv)
{
    int i;
    char *operators[] = {"+", "-", "*", "/", "%"};
    int num = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    int (*function)();
    if (argc != 3)
    {
        printf("Error\n");
         
    }
    for (i = 0; i < argc; i++)
    {
        if (argv[2] == operators[i])
        {
            
        }
    }
}