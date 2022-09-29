#include <stdio.h>
/**
 * main - main block
 * description:
 * return: 
 */
int main()
{
    FILE *pF = fopen("txt/test.txt","w");

    fprintf(pF, "bikeman\n");

    fclose(pF);

    // if (remove("test.txt") == 0)
    // {
    //     printf("That file was deleted successfully!\n");
    // }
    // else
    // {
    //     printf("That file was Not deleted!\n");
    // }
    

    return 0;
}
