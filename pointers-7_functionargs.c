#include <stdio.h>
/**
 * main - main block
 * description: pointers as function arguments - call by reference
 * Return: 0
 */
void increment(int *p)
{
    *p = *p + 1;
    printf("addres of variable(a) in increment = %p\n", p);
}
int main(void)
{
    int a;
    a = 10;
    increment(&a);
    printf("a = %d\n", a);
    printf("addres of variable(a) in increment = %p\n", &a);

    return (0);
}
