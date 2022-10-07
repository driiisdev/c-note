#include <stdio.h>
#include <stdlib.h>
/**
 * Bubble Sort function for increasing or decreasing order
 * callback function should compare two integers
 */
int abs_compare(int a, int b)
{
    if (abs(a) > abs(b))
    {
        return (1);
    }
    else
    {
        return(-1);
    }
    
}
void BubbleSort(int *A, int n, int (*abs_compare)(int, int))
{
    int i, j, tmp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-1; j++)
        {
            if (abs_compare(A[j], A[j+1]) > 0) // compare A[j] with A[j+1] and swap if needed
            {
                tmp = A[j];
                A[j] = A[j+1];
                A[j+1] = tmp;
            }
            
        }
        
    }
    
}

int main()
{
    int i;
    int A[] = {-31, 22, -1, 50, -6, 4};

    BubbleSort(A, 6, abs_compare);

    for (i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n ");
    return (0);
}
