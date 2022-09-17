#include <stdio.h>
#include <stdbool.h>
/**
 * main - main block
 * description: logical operators
 * &&(AND) = checks if the conditions are true
 * ||(OR) = checks if at least one of the condition is true
 * !(NOT) = reverses the state of a condition
 * Return: 0
 */
int main()
{
    float temp = 400;
    bool sunny = false;

    if (temp >= 0 && temp <= 300 || sunny)
    {
        printf("The weather is good!\n");
    }
    else if (!sunny)
    {
        printf("Its not sunny\n");
    }
    else
    {
        printf("The weather is bad!\n");
    }
    return 0;
}