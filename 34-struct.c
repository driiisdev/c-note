#include <stdio.h>
#include <string.h>
/**
 * main - main block
 * description: struct
 * struct - collection of related members ("variables")
 *          they can be of different data types
 *          listed under one name in a block of memory
 *          VERY SIMILAR to CLASSES in other languages (but no methods)
 * Return: 0
 */
struct player
{
    char name[25];
    int score;
};

int main(void)
{
    struct player player1;
    struct player player2;

    strcpy(player1.name, "eddie");
    player1.score = 25;

    strcpy(player2.name, "driiis");
    player2.score = 40;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    return 0;
}