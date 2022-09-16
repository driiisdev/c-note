#include <stdio.h>
#include <math.h>
/**
 * main - main block
 * description: pythagoras theorem
 * Return: always (0) success
 */
int main(void)
{
    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf\n", &A);

    printf("Enter side B: ");
    scanf("%lf\n", &B);

    C = sqrt(A*A + B*B);

    printf("Side C: %lf", C);

    return 0;
}