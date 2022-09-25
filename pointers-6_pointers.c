#include <stdio.h>
/**
 * main - main block
 * description: pointer to pointer
 * Return: 0
 */
int main(void)
{
    int x = 5;
    int *p = &x;
    *p = 6; // update value at address
    int **q = &p; // stores address of a pointer. p2p
    int ***r = &q; // stores address of a pointer. p2p2p

    printf("%d\n", *p); // output(6): value at address
    printf("%d\n", *q); // output: address stored
    printf("%d\n", *(*q)); // output(6): value at address stored
    printf("%d\n", *(*r)); // output: address stored
    printf("%d\n", *(*(*r))); // output(6): value at address stored
    
    *(*(*r)) = 10; // updating value at address
    printf("x = %d\n", x);
    *(*q) = *p + 2; // updating value at address
    printf("x = %d\n", x);

    return (0);
}
