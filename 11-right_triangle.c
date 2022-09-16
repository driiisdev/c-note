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
    scanf("%lf", &A);

    printf("Enter side B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Side C: %.2lf\n", C);

    return 0;
}