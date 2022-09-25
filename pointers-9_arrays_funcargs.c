#include <stdio.h>
/**
 * main - main block
 * description: Arrays as function arguments
 * Return: 0
 */
int doubleElements(int *a, int size) // 'int *a' or 'int a[]'  ..it's the same
{
    int i;
    int sum = 0;
    for (i = 0; i < size; i++)
    {
        *a = 2 * *(a+i); // 'a[i]' same as '*(a+i)'
        sum += *a;
    }
    return (sum);

}
int main(void)
{
    int a[] = {1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);

    int total = doubleElements(&a, size);    

    printf("sum of elements = %d\n", total);

    return (0);
}
