#include <stdio.h>
/**
 * main - main block
 * description:
 * Return: 0
 */
double square(double x)
{
    return x * x;
}

int main()
{
    double result =  square(3.14);

    printf("result: %lf\n", result);
    
    return 0;
}