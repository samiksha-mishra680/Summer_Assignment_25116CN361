// WAP to create quiz application.

#include <stdio.h>
#include <windows.h>

int score = 0;

void StartQuiz();
void ShowScore();

int main()
{
    int choice;

    do
    {
        printf ("\n======== QUIZ APPLICATION ========\n");
        printf ("\n");
        printf ("1. Start Quiz\n");
        printf ("2. Show Score\n");
        printf ("3. Exit\n");
        printf ("\n");
        Sleep(2000);

        printf ("Enter your choice : ");
        scanf("%d", &choice);
        printf ("\n");

        switch (choice)
        {
            case 1 :
                score = 0;
                StartQuiz();
                Sleep(2000);
                break;

            case 2 :
                 ShowScore();
                 Sleep(2000);
                 break;

            case 3 :
                 printf ("Thank you !\n");
                 break;

            default :
                 printf ("Invalid Choice !\n");
         }

    } 
    while (choice != 3);
    
    return 0;
}

void StartQuiz ()
{
    int choice;

    printf ("\nQues 1. Who is the founder of C Programming ?\n");
    printf ("1. Bill Gates\n");
    printf ("2. Dennis Ritchie\n");
    printf ("3. James Gosling\n");
    printf ("4. Bjarne Stroustrup\n");
    printf ("\n");
    Sleep (2000);

    printf ("Enter your answer : ");
    scanf ("%d", &choice);

    Sleep(2000);

    if (choice == 2)
    {
        printf ("Correct Answer.\n");
        score++ ;
    }

    else
    printf ("Wrong Answer !\n");

    Sleep (2000);

    printf ("\nQues 2. Which function is used to take input in C ?\n ");
    printf ("1. printf()\n");
    printf ("2. scanf()\n");
    printf ("3. main()\n");
    printf ("4. return()\n");
    printf ("\n");
    Sleep(2000);

    printf ("Enter your Answer : ");
    scanf ("%d", &choice);
    printf ("\n");
    Sleep(2000);

    if (choice == 2)
    {
        printf ("Correct Answer !\n");
        score++ ;
    }

     else
     printf ("Wrong Answer !");

     printf ("\n");
     printf ("Quiz Completed ! \n");
}

void ShowScore()
{
    printf ("\n Your Score = %d\n", score);
}

    