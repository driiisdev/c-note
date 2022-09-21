#include <stdio.h>
/**
 * main - main block
 * description: typedef
 * typedef - reserved keyword that gives an existing datatype a "nickname"
 * Return: 0
 */
typedef struct 
{
    char name[25];
    char password[12];
    int id;
} user;

int main(void)
{
    user name1 = {"driiisdev", "(xyz@123)", 12};
    user name2 = {"eddiemoe", "abracadabra", 24};

    printf("%s\n", name1.name);
    printf("%s\n", name1.password);
    printf("%d\n", name1.id);

    printf("%s\n", name2.name);
    printf("%s\n", name2.password);
    printf("%d\n", name2.id);

    return 0;
}