#include "function_pointers.h"
#include <stdlib.h>


/**
 * print_name - prints a name
 * @name: name
 * @f: f
*/
void print_name(char *name, void (*f)(char *))
{
    f(name);
}