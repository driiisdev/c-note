#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * description: use of realloc, example
 * Return: 0
 */
int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int *A = (int*)malloc(n*sizeof(int)); // dynamically allocated array

    for (int i = 0; i < n; i++)
    {
        A[i] = i+1;
    }

    int *B = (int*)realloc(A, 0)); // equivalent to free(A)

    int *B = (int*)realloc(A, 2*n*sizeof(int)); // reallocation of memory

    int *B = (int*)realloc(NULL, n*sizeof(int)); // equivalent to malloc

    printf("prev address: %p, new address: %p\n", A, B);

    for (int i = 0; i < 2*n; i++)
    {
        printf("%d ", B[i]); // this will give Error cus the address has been freed
    }
    printf("\n");

    return (0);
}
