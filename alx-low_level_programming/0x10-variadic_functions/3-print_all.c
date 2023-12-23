#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


void print_all(const char * const format, ...)
{
	va_list ap;
	int itter;
	int i, checker;
	char c;
	float f;
	char *s;

	if (format == NULL)
		return;
	va_start(ap, format);
	itter = 0;
	checker = 0;
	while (format[itter] != '\0')
	{
		if (checker)
		{
			putchar(',');
			putchar(' ');
			checker = 0;
		}
		switch (format[itter])
		{
			case 'i':
				i = va_arg(ap, int);
				printf("%d", i);
				checker = 1;
				break;
			case 'c':
				c = (char) va_arg(ap, int);
				printf("%c", c);
				checker = 1;
				break;
			case 'f':
				f = (float) va_arg(ap, double);
				printf("%f", f);
				checker = 1;
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				checker = 1;
				break;
			default:
				break;
		}	
		itter++;
	}
	putchar('\n');
	va_end(ap);
}
