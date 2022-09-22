#include <stdio.h>
/**
 * main - main block
 * description: enumeration
 * enumeration = a user defined type of named integer identifiers helps to make a program more readable
 * Return: 0
 */
enum Days{Sun, Mon, Tue, Wed, Thur, Fri, Sat};

int main(void)
{
    enum Days today = Sun;

    if (today == Sun || today == Sat)
    {
        printf("holla holla, its a weekend!\n");
    }
    else
    {
        printf("Mehn, I better get to work early\n");
    }
    

    return 0;
}
