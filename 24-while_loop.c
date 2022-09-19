#include <stdio.h>
#include <string.h>
/**
 * main - main block
 * description: while loop
 * while loop = repeats a section of code possibly unlimited times.
 * WHILE some condition remains true
 * a WHILE loop might not execute at all
 * Return: 0
 */

int main(void)
{
    char name[25];

    printf("what is your name?:\n");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("you did not enter your name\n");
        printf("what's your name?: \n");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }
    
    printf("Hello %s", name);

    return 0;
}
