#include <stdio.h>
/**
 * main - main block
 * description: sorting of array
 * Return: 0
 */
void sort(char array[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void printArray(char array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%c", array[i]);
    }
    printf("\n");
}

int main(void)
{
    // int array[] = {1,2,5,4,7,8,9,6,3};
    char array[] = {'I', 'D', 'R', 'S', 'O', 'L', 'A', 'Y', 'N', 'K'};
    int len = sizeof(array)/sizeof(array[0]);

    sort(array, len);
    printArray(array, len);

    return 0;
}
