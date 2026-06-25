// WAP to create number guessing game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main()
{
    int guess;

    srand (time(0));
    int secret = rand() % 100 + 1;                     // to select a number on random
    
    do
    {
        printf ("GUESS THE NUMBER BETWEEN 1 - 100 :  ");
        scanf ("%d", &guess);

        printf ("\n");

        printf ("CHECKING...\n");
        Sleep (1000);

        if (guess > secret)
        printf ("TOO HIGH, TRY AGAIN.\n\n");

        else if (guess < secret)
        printf ("TOO LOW, TRY AGAIN.\n\n");

        else 
        printf ("CONGRATULATIONS, YOU GUESSED IT CORRECT.");
    }

    while (guess != secret);

    return 0;
}
    
    