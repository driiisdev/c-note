#include <stdio.h>
/**
 * main - main block
 * description: multi-dimensional arrays
 * 2-D Arrays - formation
 * e.g:- B[i][j] = *(B[i]+j) 
 *               = *(*(B+i)+j)
 * Return: 0
 */
void Func(int (*B)[3]);

int main(void)
{
    int B[2][3] = {
        {2, 3, 6},
        {4, 5, 8}
    };

    int (*p)[3] = B;

    printf("%d\n", B); // basically pointing to address of &B[0]
    printf("%d\n", B+1); // basically pointing to address of &B[1]

    printf("%d\n", *B); // basically pointing to address of &B[0][0]
    printf("%d\n", *(B+1)); // basically pointing to address of &B[1][0]

    printf("%d\n", *(B+1) + 2); // basically pointing to address of &B[1][2]
    printf("%d\n", *(*B+1)); // dereferencing value of &B[0][1]

    int c[3][2][2] =    {
                        {{2, 5}, {7, 9}},
                        {{3, 4}, {6, 1}},
                        {{0, 8}, {11, 13}}
                        };
    
    // printf("%d %d %d %d\n", c, *c, c[0], &c[0][0]);

    Func(B);    // B returns int(*)[3]

    return (0);
}

void Func(int (*B)[3])    // OR B[][3]
{
    printf("THI %d\n", *(*B+3));
}