#include <stdio.h>
#include <stdlib.h>
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

    // calloc - void* calloc(size_t num, size_t size)
    // NB: calloc is same as malloc except that it takes 2 arguments. first argument is no of elements, second, size of data type in bytes.

    p = (int*)calloc(10, sizeof(int)); // allocating memory for array of 10 int
    printf("%p\n", p);

    // realloc - void* realloc(void* ptr, size_t size)
    // NB: realloc is used to reallocate the size of an existing block of memory(dynamic). function takes two arguments, first takes the pointer to the starting address of the existing block of memory, second, size of the new block of memory

    int *q = (int*)realloc(p, 2*sizeof(int)); // allocating memory for array of 10 int
    printf("%p\n", q);

     // free - free(ptr)
    // NB: memory dynamically allocated remains allocated throughout the lifetime of the program(application), unless explicitly de-allocated from the memory
    free(p);
    p = NULL; // after free, adjust pointer to NULL

    return (0);
}
