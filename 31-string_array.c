#include <stdio.h>
#include <string.h>
/**
 * main - main block
 * description: array of string
 * Return: 0
 */
int main(void)
{
    char cars[][10] = {"Mustang", "camry", "toyota", "benz"};

    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }
    

    return 0;
}