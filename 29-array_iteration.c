#include <stdio.h>
/**
 * main - main block
 * description: Iterating an array
 * Return: 0
 */
int main(void)
{
    double prices[] = {2.0, 10.0, 20.0, 15.0, 18.0};

    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}
