#include <stdio.h>
/**
 * main - main block
 * description: array of struct
 * Return: 0
 */
struct Students
{
    char name[25];
    double gpa;
};

int main(void)
{
    struct Students Students1 = {"idris", 4.9};
    struct Students Students2 = {"yakub", 3.9};
    struct Students Students3 = {"eddie", 2.7};
    struct Students Students4 = {"moe", 3.4};

    struct Students students[] = {Students1, Students2, Students3, Students4};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%s\t", students[i].name);
        printf("%.2lf\n", students[i].gpa);
    }
    

    return 0;
}