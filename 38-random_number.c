#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * description: Random numbers
 * Pseudo random numbers = a set of values or elements that are statistically random (Don't use these for any sort of cryptographic security)
 * Return: 0
 */
int main(void)
{
    srand(time(0));

    int player1 = (rand() % 60);
    int player2 = (rand() % 60) + 10;

    printf("%d\n", player1);
    printf("%d\n", player2);

    return 0;
}