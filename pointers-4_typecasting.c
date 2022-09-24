#include <stdio.h>
/**
 * main - main block
 * description: typecasting 
 * Return: 0;
 */
int main(void)
{
    int a = 1025;
    int *p;
    p = &a;

    printf("size of integer is %d bytes\n", sizeof(int));
    printf("Address = %d, value = %d\n", p, *p);
    printf("Address = %d, value = %d\n", p + 1, *(p + 1));

    char *p0;
    p0 = (char*)p; // typecasting

    printf("Size of char is %d bytes\n", sizeof(char));
    printf("Address = %d, value = %d\n", p0, *p0);
    printf("Address = %d, value = %d\n", p0 + 1, *(p0 + 1));
    // 1025 = 00000000 00000000 00000100 00000001

    return (0);
}
