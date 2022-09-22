#include <stdio.h>
/**
 * main - main block
 * description: pointers
 * pointer = a "variable-like" reference that holds a memory address to      another variable, array, etc.
 *           some tasks are performed more easily with pointers.
 *           * = indirection operator (value at address)
 * Return: 0
 */
void printAge(int *pAge)
{
    printf("you are %d years old\n", *pAge); // dereference
}
int main(void)
{
    int age =  21;
    int *pAge = NULL; //good practice to assign NULL if declaring a pointer
    pAge = &age;

    printf("address of age: %p\n", &age);
    printf("value of age: %p\n", pAge);

    printf("size of age: %d bytes\n",sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));

    printf("value of age: %d\n", age);
    printf("value at stored address : %d\n", *pAge); // dereferencing

    return 0;
}
