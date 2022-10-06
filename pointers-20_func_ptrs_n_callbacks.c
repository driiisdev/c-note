
#include <stdio.h>
#include <stdio.h>
/**
 * use of function pointers:
*  (a) function pointers can be passed as arguments to functions
 */
void A()
{
    printf("Hello\n");
}
void B(void (*ptr)()) //function pointer as argument
{
    ptr(); // call-back function that "ptr" points to
}

int main()
{
    // void (*p)() = A; // OR
    void (*p)(); // declaring a void returning function
    p = A; // assigin the address of func-A to pointer
    printf("%p\n", A);

    B(p);
    // OR
    B(A); // A is callback function
    // OR
    A();  // callback func-A

    return (0);
}
