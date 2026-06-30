// WAP to create student record system using arrays and strings.

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    int roll[100];
    char name [100][50];
    int age[100];
    char course [100][50];
    float marks[100];

    int n = 0;
    int choice, i, found;
    int searchRoll;

    do
    {
        printf ("\n      ***** STUDENT RECORD SYSTEM ******     \n");
        printf ("\n");
        printf ("1. Add Student\n");
        printf ("2. Display all Students\n");
        printf ("3. Search Student\n");
        printf ("4. Exit\n");
        printf ("\n");

        printf ("Enter Choice : ");
        scanf ("%d", &choice);
        printf ("\n");
        Sleep (2000);

        switch (choice)
        {
            case 1 :
              printf ("Enter Roll No. : ");
              scanf ("%d", &roll[n]);

              printf ("Enter Name : ");
              scanf (" %[^\n]", name[n]);

              printf ("Enter Age : ");
              scanf ("%d", &age[n]);

              printf ("Enter course : ");
              scanf (" %[^\n]", course[n]);

              printf ("Enter Marks : ");
              scanf ("%f", &marks[n]);
              printf ("\n");
              Sleep (2000);

              printf ("STUDENT ADDED SUCCESSFULLLY !\n");
              n++ ;
              Sleep (2000);
              break;

            case 2 :
               if (n == 0)
               {
                printf ("NO RECORDS FOUND !\n");
                Sleep (2000);
               }

               else
               {
                printf ("------------------- STUDENT RECORD --------------------\n");
                for (i=0; i<n; i++) 
                {
                  
                  printf ("\n");
                  printf ("-----------------------------------------------------\n");
                  printf ("Roll no. : %d\n", roll[i]);
                  printf ("Name     : %s\n", name[i]);
                  printf ("Age      : %d\n", age[i]);
                  printf ("Course   : %s\n", course[i]);
                  printf ("Marks    : %.2f\n", marks[i]);
                  printf ("-----------------------------------------------------\n");
                  printf ("\n");
                }
                }
                break;

            case 3 :
                printf ("Enter Roll no. to search : ");
                scanf ("%d", &searchRoll);
                printf ("\n");
                Sleep (2000);

                for (i=0; i<n; i++)
                {
                    if (roll[i] == searchRoll)
                    {
                        found = 1;
                        printf ("Roll no. : %d\n", roll[i]);
                        printf ("Name     : %s\n", name[i]);
                        printf ("Age      : %d\n", age[i]);
                        printf ("Course   : %s\n", course[i]);
                        printf ("Marks    : %.2f\n", marks[i]);
                        printf ("\n");
                        Sleep (2000);
                        break;
                    }
                }
                if (found == 0)
                    {
                        printf ("NO RECORD FOUND !\n");
                        Sleep (2000);
                    }

                break;

            case 4 :
                printf ("Thank you !\n");
                break;

            default :
                printf ("INVALID CHOICE\n");
                Sleep (2000);  
        }
    
    }

    while (choice != 4);

    return 0;
}