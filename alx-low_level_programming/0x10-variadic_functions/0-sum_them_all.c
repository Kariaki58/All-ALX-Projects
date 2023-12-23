#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"


int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int sum, i;
	if (n == 0)
		return (0);

	va_start(list, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	return (sum);
}
