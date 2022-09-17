#include <stdio.h>
#include <ctype.h>
/**
 * main - main block
 * description: temperature conversion
 * Return: 0
 */
int main(void)
{
    char unit;
    float temp;

    printf("Is the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);
    printf("%c\n", unit);

    if (unit == 'C')
    {
        printf("Enter the temp in celsius: ");
        scanf("%f", &temp);
        temp = ((temp * 9) / 5) + 32;
        printf("The temp in Farenheit is: %.1f\n", temp);
    }
    else if (unit == 'F')
    {
        printf("Enter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temp in celsius is: %.1f\n", temp);
    }
    else
    {
        printf("%c is not a valid unit of measurement", unit);
    }

    return 0;
}
