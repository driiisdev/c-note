#include <stdio.h>
/**
 * main - main block
 * description: program to calculate circumference of a circle
 * Return: always (0) success
 */
int main(void)
{
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    printf("circumference: %lf\n", circumference);

    area = PI * radius * radius;
    printf("area: %lf\n", area); 

    return (0);
}