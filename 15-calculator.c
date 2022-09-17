#include <stdio.h>

int main(void)
{
    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter an operator: ");
    scanf("%c", &operator);
    
    printf("Enter a num: ");
    scanf("%lf", &num1);

    printf("Enter a num: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("result: %lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("result: %lf\n", result);
        break;
    case '/':
        result = num1 / num2;
        printf("result: %lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("result: %lf\n", result);
        break;
    default:
        printf("Operator not valid, choose (+ - / *)\n");
        break;
    }

    return 0;
}