#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - array iterator
 * @array: arra
 * @size: size
 * @action: action
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    for (i = 0; i < size; i++)
    {
        action(array[i]);
    }
}
