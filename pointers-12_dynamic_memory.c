#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * description: dynamic memory
 * dynamic memory - allocation of memory(block of memory) for a program on the Heap, at run time or execution.
 * Return: 0
 */
int main ()
{
    int a; // goes on stack
    int *p;

    // using malloc and free

    p = (int*)malloc(sizeof(int)); // allocating memory for an int
    printf("%p\n", p);
    *p = 10;
    printf("%d\n", *p);

    free(p);

    p = (int*)malloc(20*sizeof(int)); // allocating memory for array of 20 int
    printf("%p\n", p);


    // using new and delete in c++

    // p = new int; // allocating memory for an int
    // printf("%p\n", p);
    // *p = 10;
    // printf("%d\n", *p);

    // delete(p);

    // p = new int[20]; // allocating memory for array of 20 int
    // printf("%p\n", p);
    // delete[] p;

    return (0);
}
    