#include <stdio.h>
/**
 * main - main block
 * description: scanf and fgets function
 * use the '&' in front of the variable to set the address of the operator
 * 'scanf' doesn't allow whitespace, hence use 'fgets' to in place of 'scanf'
 * Return: always (0) success
 */
int main(void)
{
    char name[25];
    int age;

    printf("Say my name: ");
    // scanf("%s", &name);
    fgets(name, 25, stdin);

    printf("How old are you? ");
    scanf("%d", &age);

    printf("\nHi %s", name);
    printf("You are %d years old\n", age);

    return (0);
}