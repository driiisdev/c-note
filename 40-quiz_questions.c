#include <stdio.h>
#include <ctype.h>
/**
 * main - main block
 * description: quiz questions
 * Return: 0
 */
int main(void)
{
    char questions[][100] = {
                            "1. what year did the C language debut?: ",
                            "2. who is credited with creating C?: ",
                            "3. what is the predecessor of C?: "
                            };

    char options[][100] = {
                            "A. 1969", "B. 1972", "C. 1975", "D. 1999",
                            "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Bobby",
                            "A. Objective C", "B. B", "C. C++", "D. C#"
                            };

    char answers[3] = {'B', 'A', 'B'};

    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score;

    printf("Quiz Game\n");

    for (int i = 0; i < numberOfQuestions; i++)
    {
        // printf("-----------------------\n");
        printf("%s\n", questions[i]);
        printf("--------------------------------------\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }
        printf("guess: ");
        scanf("%c", &guess);
        scanf("%c");

        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf("--------\n");
            printf("CORRECT\n");
            printf("--------\n");
            score++;
        }
        else
        {
            printf("------\n");
            printf("WRONG\n");
            printf("------\n");
        }
        
    }
    
    printf("Score: %d/%d\n", score, numberOfQuestions);

    return 0;
}
