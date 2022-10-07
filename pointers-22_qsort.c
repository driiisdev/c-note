#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * qsort function
 */
int compare(const void* a, const void* b)
{
    int A = *((int*)a); // typecasting to int* and getting value
    int B = *((int*)a);
    return abs(A) - abs(B);
}
int main()
{
    int i;
    int A[] = {-31, 22, -1, 50, -6, 4};
    qsort(A, 6, sizeof(int), compare);

    for (i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return (0);
}