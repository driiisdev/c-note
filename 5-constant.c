#include <stdio.h>
/**
 * main - main block
 * description: constant
 * constant = fixed value that cannot be altered by the program during its execution
 * Return: always (0) success
 */
int main(void)
{
    // add 'const' to the intented constant variable and variable name should be in UPPERCASE as a good coding convention
    const float PI = 3.14159;

    printf("%f\n", PI);

    return (0);
}