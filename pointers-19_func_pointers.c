#include <stdio.h>
#include<stdlib.h>
/**
 * pointers: a) can point to a data
 *            b) can point to functions
 * NB: address of a function (aka) 'entry point' will be the address of the first instruction in the function
 * 
 * NB: int (*p)(int, int); // declaring a function pointer
 * 
 * NB: int *p(int, int); // declaring a function that would return int*. in other words declaring Add() func will go thus; int *Add(int a, int b){return pointer}
 */

int Add(int a, int b)
{
    return (a+b);
}
int main ()
{
    int c;
    int (*p)(int, int); // declaring a function pointer

    p = &Add; // using either '&Add' or 'Add' will assign the address of the func(Add) to the pointer, only that using 'Add' means :- c = p(2, 3);
    
    c = (*p)(2, 3); // de-referencing and executing the function 

    printf("%d\n", c);

    return (0);
}
