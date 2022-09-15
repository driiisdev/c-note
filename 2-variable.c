#include <stdio.h>
/**
 * main - main block
 * description: variable
 * variable = Allocated space in memory to store a value.
 *            We refer to avariable's name to access the stored value.
 *            That variable now behaves as if it was the value it contains.
 *            But we need to declare what type of data we are storing within the variable.
 * variable can be declared and initialized.
 * Return: always (0) success
 */
int main(void)
{
    int x; //declaration
    x = 471; //initialization
    int y = 174; //declaration + initialization

    int age = 24; //integer
    float gpa = 5.0; //floating point number
    char grade = 'A'; //single character
    char name[] = "driiisdev"; //array of characters 

    printf("i am %s\n", name);
    printf("i am %d years old\n", age);
    printf("as per scholar, gpa is %3f\n",gpa);
    printf("grade: %c\n", grade);

    return (0);
}
