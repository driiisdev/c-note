#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * description: guessing of numbers
 * Return: 0
 */
int main(void)
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int answer;

    // uses the current time as a seed
    srand(time(0));

    // generate a random number between MIN & MAX
    answer = (rand() % MAX) + MIN;

    do
    {
        printf("Make a guess: ");
        scanf("%d", &guess);

        if (guess > answer)
        {
            printf("Too high!!!\n");
        }
        else if (guess < answer)
        {
            printf("Too low!!!\n");
        }
        else
        {
            printf("yay! you guessed right\n");
        }
        
    } while (guess != answer);
    
}
