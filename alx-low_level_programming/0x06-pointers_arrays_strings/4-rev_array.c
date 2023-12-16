#include "main.h"


/**
 * reverse_array - reverses the content
 * @a: a
 * @n: n
*/
void reverse_array(int *a, int n)
{
    int i;
    int end, temp;

    end = n - 1;
    i = 0;
    while (i < end)
    {
        temp = a[i];
        a[i] = a[end];
        a[end] = temp;
        i++;
        end--;
    }
}