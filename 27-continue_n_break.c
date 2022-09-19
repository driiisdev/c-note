#include <stdio.h>
/**
 * main - main block
 * description: continue and break in loop/switch
 * continue - skips rest of code & forces the next iteration of the loop
 * break - exits a loop/switch
 * Return: 
 */
int main(void)
{
    for (int i =1; i <= 20; i++)
    {
        if (i == 10)
        {
            printf("midway\n");
            continue;
        }else if (i == 17)
        {
            printf("oops! i might quit here\n");
            break;
        }
        else
        {
            printf("%d\n", i);
        }
        
    }
}
