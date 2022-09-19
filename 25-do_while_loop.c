#include <stdio.h>
/**
 * main - main block
 * description: do-while_loop
 * while_loop - checks a condition, then exexcutes a block of code if condition is true
 * do-while_loop - always executes a block of code once, Then checks a condition
 * Return: 0
 */
int main(void)
{
    int number = 0;
    int sum = 0;

    do
    {
        printf("Enter a # above 0: ");
        scanf("%d", &number);

        if (number > 0)
        {
            sum += number;
        }
        
    }
    while (number > 0);
    

    printf("sum: %d\n", sum);

    return 0;
}