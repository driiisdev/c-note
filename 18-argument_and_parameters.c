#include <stdio.h>
/**
 * main - main block
 * description: arguments and parameters
 * Return: 0
 */
void birthday(char name[], int id)
{
    printf("Hi %s\n", name);
    printf("ID number %d\n", id);
}

int main(void)
{
    char name [] = "Bro";
    int id = 12;

    birthday(name, id);
    
    return 0;
}