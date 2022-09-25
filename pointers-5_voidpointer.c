#include <stdio.h>
/**
 * main - main block
 * description: void pointer - generic pointer
 * Return: 0;
 */
int main(void)
{
    int a = 1025;
    int *p;
    p = &a;
    printf("size of integer is %d bytes\n", sizeof(int));
    printf("Address =  %d, value = %d\n", p, *p);

    // void pointer - generic pointer
    void *p0;
    p0 = p; // no need for typecasting
    printf("address = %d\n", p0); // no need for dereferencing as it can only store address
    return (0);
}