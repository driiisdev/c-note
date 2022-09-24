#include <stdio.h>
/**
 * main - main block
 * description: pointers arithmetic
 * Return: 0
 */
int main()
{
    int a = 10;
    int *p;
    p = &a;

    //pointer arithmetic
    printf("%p\n", p);    // print address of variable(a) stored
    printf("%d\n", *p);   // print value at address pointed by p
    printf("%ld bytes\n", sizeof(int));   // print size of integer in bytes
    /**
     * lesson:
     * since the size of an integer is 4bytes(in other words an integer takes 4bytes in/of the memory(Ram))
     * an increase(&a+1)||(p+1) in the address of an integer means +4byes to the address of the integer
     * let assume:
     * int a // as an address of 204
     * &a + 1 = 204 + 4 = 204 (again since an int takes 4bytes of memory)
     */
    printf("%p\n", p + 1);  // print (address + 1(4bytes)) of variable(a) stored
    printf("%d\n", *(p + 1));   // print value at (address + 1) pointed by p

    return (0);
}
