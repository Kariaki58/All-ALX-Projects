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
	int (*operator)(int, int);

	if (argc != 4)
	{
		exit(98);
	}
	operator = get_op_func(argv[2]);
	if (operator == 0)
		exit(99);
	printf("%d\n", operator(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
