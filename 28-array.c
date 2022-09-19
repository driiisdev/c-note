#include <stdio.h>
/**
 * main - main block
 * description: array
 * array - a data structure that can store many values of the same data type.
 * @nb string: is an array of individual character.
 * Return: 0
 */
int main(void)
{
    char name[] = "idris";
    double prices[] = {2.0, 10.0, 20.0, 15.0, 18.0};

    printf("$%.2lf\n", prices[3]);

    return 0;
}
