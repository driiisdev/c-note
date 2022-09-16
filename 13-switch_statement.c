#include <stdio.h>
/**
 * main - main block
 * description: switch statement
 * 
 * switch: Amore efficient alternative to using many "else if" statements allows a value to be tested for equality against many cases
 * 
 * Return: 0
 */
int main(void)
{
    char grade;

    printf("Enter a letter grade:" );
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("perfect!\n");
        break;
    case 'B':
        printf("You did good!\n");
        break;
    case 'C':
        printf("You did okay!\n");
        break;
    case 'D':
        printf("At least it's not an F!\n");
        break;
    case 'F':
        printf("Try again!\n");
        break;
    default:
        printf("Please enter only valid grades\n");
        break;
    }

return 0;
}
