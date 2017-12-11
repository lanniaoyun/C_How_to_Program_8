#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(int g, int m);

int main(void)
{
    int mynumber;
    int guess;
    int choice=1;

    srand((unsigned)time(NULL));
    do 
    {
        mynumber = 1 + rand() % 1000;
        puts("I have a number between 1 and 1000.\n"
            "Can you guess my number?\n"
            "Please type your first guess:");
        scanf("%d", &guess);

        while (!compare(guess, mynumber))
        {
            scanf("%d", &guess);
        }
        puts("Excellent! You guessed the number!\n"
            "Would you like to play again?\n"
            "Please type ( 1=yes, 0=no )? ");
        scanf("%d", &choice);
    } while (choice == 1);
    return 0;
}

int compare(int g, int m)
{
    if (g == m) 
    {
        return 1;
    }
    if (g < m)
        printf("%s", "Too low. Try again.\n? ");
    else
        printf("%s", "Too high. Try again.\n? ");
    return 0;
}