#include <stdio.h>
/**
 * main - main block
 * description: Memory
 * memory - array of bytes within RAM (e.g street)
 * memory block - a single unit (byte) within memory, used to hold some value (person)
 * memory address - the address of where a memory block is located (house address)
 * Return: 0
 */
int main(void)
{
    char a;
    double b[3];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));

    printf("address char 'a': %p\n", &a);
    printf("address double 'b[3]': %p\n", &b);

    return 0;

}
