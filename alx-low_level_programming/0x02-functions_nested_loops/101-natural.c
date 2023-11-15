#include <stdio.h>
#include <stdio.h>

int main(void)
{
    int sum, i;

    for (i = 0; i < 1024; i++)
    {
        if (!(i % 3) || !(i % 5))
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return (0);
}