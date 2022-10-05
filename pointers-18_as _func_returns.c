#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: 
 */
int add(int *a, int *b)
{
    printf("%p\n", a);
    int c = (*a) + (*b);
    return (c);
}
int main()
{
    int a = 2;
    int b = 4;
    printf("%p\n", &a);

    int p = add(&a, &b);

    printf("Sum: %d\n", p);
}
