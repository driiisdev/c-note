#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * description: use of free, example
 * Return: 0
 */
int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int *A = (int*)malloc(sizeof(int)); // dynamically allocated array

    for (int i = 0; i < n; i++)
    {
        A[i] = i+1;
    }
    free(A);
    A = NULL; // after free, adjust pointer to NULL
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]); // this will give Error cus the address has been freed
    }
    printf("\n");

    return (0);
}
