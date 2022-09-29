#include <stdio.h>
/**
 * main - main block
 * description:
 * Return: 0
 */
int main(void)
{
    char buffer[255];

    FILE *pF = fopen("txt/note.txt", "r");

    if (pF == NULL)
    {
        printf("Unable to open file!\n");
    }
    else
    {
        while (fgets(buffer, 255, pF) != NULL)
        {
            printf("%s", buffer);
        }
        printf("\n");
    }
    

    return 0;
}
