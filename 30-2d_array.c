#include <stdio.h>
/**
 * main - main block
 * description: 2D array
 * 2D array - an array, where each element is an entire array. useful if you need a matrix, grid, or table of data
 * Return: 0
 */
int main(void)
{

    int numbers[2][3];

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}
