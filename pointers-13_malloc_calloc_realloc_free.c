#include <stdio.h>
/**
 * main - main block
 * description: allocation of block of memory
 * memory allocation functions:
 * # malloc
 * # calloc
 * # realloc
 * 
 * memory de-allocation function:
 * #free
 * 
 * Return: 0
 */

int main()
{
    int a; // goes on stack
    int *p;

    // malloc - void* malloc(size_t size)
    // NB: size_t is a data type that stores only positive integer value (size_t = unsigned int) as it size cannot be negative value or zero. function malloc return (void*) pointer that gives the address of the first byte in the block of memory allocated.

    p = (int*)malloc(sizeof(int)); // allocating memory for an int
    p = (int*)malloc(10*sizeof(int)); // allocating memory for an array of 10 int

    free(p);

    // calloc - void* calloc(size_t num, size_t size)
    // NB: size_t is a data type that stores only positive integer value (size_t = unsigned int) as it size cannot be negative value or zero. function malloc return (void*) pointer that gives the address of the first byte in the block of memory allocated. calloc is same as malloc except that it takes 2 arguments.

    p = (int*)calloc(10, sizeof(int)); // allocating memory for array of 10 int
    printf("%p\n", p);

    return (0);
}