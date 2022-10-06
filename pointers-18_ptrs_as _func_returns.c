#include <stdio.h>
#include <stdlib.h>
/**
 * add - adds two parameters 
 * Return: a pointer to integer
 */
int *add(int *a, int *b)
{
    printf("%p\n", a);
    int *c;
    c = (int *)malloc(sizeof(int));
    *c = (*a) + (*b);
    return (c);
}
/**
 * main - calls 'add' function 
 * Return: (0) success
 */
int main()
{
    int a = 2;
    int b = 4;
    printf("%p\n", &a);

    int *p = add(&a, &b);

    printf("Sum: %d\n", *p);

    return (0);
}
