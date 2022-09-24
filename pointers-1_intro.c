#include <stdio.h>
/**
 * main - main block
 * description: pointers intro
 * pointers: variables that store address of another variable
 * Return: 0
 */
int main(void)
{
    int a;  // integer
    int *p; // pointer to integer
    p = &a; // pointer(p) stores address of variable(a)
    a = 5;  // variable(a) hold an integer value of '5'

    printf("%p\n", p);    // output: address of variable(i.e variable(a)) stored
    printf("%p\n", &a);   // output: address of variable(a)
    printf("%p\n", &p);   // output: address of pointers
    printf("%d\n", *p);   // output (5): 'value' at address of variable(i.e variable(a)) stored. this aka dereferencing
    
    *p = 8; // updating 'value' at address of variable(i.e variable(a)) stored.
    printf("%d\n", *p);   // output (8): 'value' at address of variable(i.e variable(a)) stored. this aka dereferencing
    printf("%d\n", a);    // output (8)

    /**
     * note
     * int a;       // integer
     * int *p;      // pointer to integer
     * char c;      // character
     * char *po;    // pointer to character
     * double d;    // double
     * double *p1;  // pointer to double
     */

    return 0;
}
