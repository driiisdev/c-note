#include <stdio.h>
/**
 * main - main block
 * description: pointers and array
 * Return: 0
 */
int main(void)
{
    int a[] = {2, 4, 5, 8, 1};

    printf("%p\n", a); // output: address  of first element in the array
    printf("%d\n", *a); // output: value of the first element in the array
    printf("%p\n", &a[0]);  // output: address of the first element in the array
    printf("%d\n", a[0]);  // output: value of the first element in the array

    for (int i = 0; i < 5; i++)
    {
        printf("Address = %p\n", &a[i]);
        printf("value = %d\n", a[i]);

        printf("Address = %p\n", a+i);
        printf("value = %d\n", *(a+i));
    }
    

    return (0);
}
