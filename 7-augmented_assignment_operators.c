#include <stdio.h>

/**
 * main - main block
 * description: augmented assignment operators
 * augmented assignment operators = used to replace a statement where an operator takes a variable as one of its arguments and then assigns the result back to the same variable
 * e.g x = x + 1
 *     x+=1
 * Return: always (0) success
 */
int main(void)
{
    int x = 10;

    // x = x + 2;

    // x = x - 3;
    // x -= 3

    // x = x * 4;
    // x *= 4;

    // x = x / 5;
    // x /= 5;

    // x = x % 2;
    x %= 2;

    printf("%d\n", x);

    return 0;
}