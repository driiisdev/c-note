#include <stdio.h>
/**
 * main - main block
 * description:
 * Return: 0
 */
int main(void)
{
    int a;
    int *p;
    p = &a; // assigning address of a to p
    // line 10 - 11 as: int *p = &a;

    printf("%d\n", p);    // print address of variable(a) stored
    printf("%d\n", *p);   // print value at address pointed by p

    int b = 20;
    *p = b;   // will update the value at address pointed by p to value of variable(b)
    printf("%d\n", p);    // print address of variable(a) stored. nb: address remains same
    printf("%d\n", *p);   // print value at address pointed by p. nb: value updated

    return (0);
}