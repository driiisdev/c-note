#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * memory leak - occurs as a result of failure to 'free' dynamic allocated block of memory on the heap. this is also considered memory wastage
 * 
 * example:- simple betting game
 * "jack, queen, king" - computer shuffles these cards
 * player deposits $100
 * player has to guess the position of queen
 * if player guess right, he wins 3*bet
 * if player guess wrong, he lose the bet
 *
 */
int cash = 100;

void play(int bet)
{
    // char C[3] = {'J', 'Q', 'K'};
    // OR
    char *C = (char*)malloc(10000 * sizeof(char));
    C[0] = 'J';
    C[1] = 'Q';
    C[2] = 'K';

    printf("shuffling .....\n");
    srand(time(NULL)); // seeding random number generator
    
    int i;

    for (i = 0; i < 5; i++)
    {
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp; // swaps characters
    }
    
    int guess;
    printf("what's the position of queen? (1, 2, or 3): ");
    scanf("%d", &guess);

    if (C[guess - 1] == 'Q')
    {
        cash += 3 * bet;
        printf("You guesssed right!\n");
        printf("You have a total cash of  of $%d\n", cash);
    }
    else
    {
        cash -= bet;
        printf("You guessed wrong :(\n");
        printf("You have a total cash of $%d\n", cash);
    }
    
    free(C);
}


int main()
{
    int bet;

    while (cash > 0)
    {
        printf("what's your bet? $");
        scanf("%d", &bet);

        if (bet == 0 || bet > cash)
        {
            break;
        }
        
        play(bet);
    }
    
    return (0);
}
