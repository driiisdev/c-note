#include <stdio.h>
#include <string.h>
/**
 * main - main block
 * description: chararcter arrays and pointers
 * 1 - How to store strings
 *     size of array >= no of character in string + 1
 *     e.g "john" :- size >= 5
 *     Rule: a string in C is to be terminated  by a null character '\0'.
 * 2 - Arrays and Pointers are different types that are used in similar manner
 * 3 - Arrays are always passed to function by reference and not by value
 * Return: 0
 */
void print(char *c)
{
    int i = 0;
    while (c[i] != '\0')
    {
        printf("%c", c[i]);
        i++;
    }
    printf("\n");
    
}
int main(void)
{
    char c[] = "john";

    printf("size in bytes = %ld\n", sizeof(c));
    printf("%s\n", c);

    char c1[6] = "Hello";
    char* c2;
    c2 = c1; // c2 will stored address of 'H' as (base address)

    // c1 = c2; // impossible: variable can not hold a pointer, only pointers can hold pointers and pointers can store address of other variables or pointers

    printf("%c\n", *c2); // output: H
    // to access other characters in the array
    printf("%c\n", c2[2]); // same as *(c2+2);  output: 'l'

    char name[20] = "idris";
    print(name); // using the custom print function

    // char s[20] = "miami"; // string gets stored in the space allocated for the array
    char *s = "jurassi"; // string gets stored as compile time 'constant', hence can't be modified
    printf("hello disney world\n");
    print(s);

    return (0);

}
