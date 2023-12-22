#include <stdio.h>
#include <stdlib.h>


void add(int a, int b)
{
    printf("Addition is %d\n", a + b);
}

void substract(int a, int b)
{
    printf("Subtraction is %d\n", a - b);
}

void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a * b);
}

void fun1() { printf("Fun1\n"); }
void fun2() { printf("Fun2\n"); }

void wrapper(void (*fun)())
{
    fun();
}

int main()
{
    void (*fun_ptr_arr[]) (int, int) = {add, substract, multiply};
    unsigned int ch, a = 15, b = 10;

    ch = 0;
    // fun_ptr_arr[ch](a, b);
    wrapper(fun1);
    wrapper(fun2);
}