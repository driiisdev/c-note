#include <stdio.h>
/**
 * main - main block
 * description: nested_loop
 * nested_loop - a loop inside of another loop
 */
int main(void)
{
    int rows;
    int columns;
    char symbol;

    printf("Enter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);

    scanf("%c");

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c%c*", symbol);
        }
        printf("\n");
    }
    

    return 0;
}
