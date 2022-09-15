#include <stdio.h>

/**
 * main - main block
 * description: arithmetic operators
 * Return: always (0) success
 */
int main(void)
{
    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ increment
    // -- decrement

    int x = 5;
    int y = 2;

    int z  = x + y;
    int z  = x - y;
    int z  = x * y;
    float z  = x / (float) y;
    int z  = x % y;

    x++;
    y--;

    printf("%d", z);

    return (0);

}