#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *next;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		next = va_arg(ap, char *);
		if (!next)
			printf("(nil)");
		else
			printf("%s", next);
		if (i < n - 1)
			printf("%s ", separator);
	}
	putchar('\n');
	va_end(ap);
}
