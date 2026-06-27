// WAP to create student record management system.

#include <stdio.h>
#include <windows.h>

struct student
{
    int roll_number ;
    char name[50];
    float marks;
};

int main()
{
    struct student s[100];
    int n = 0;
    int choice, i, roll, found;

    while (1)
    {
        printf ("\n===== STUDENT RECORD SYSTEM =====\n");
        printf ("\n");
        printf ("1. Add Student \n");
        printf ("2. Display ALl Students\n");
        printf ("3. Search Student by Roll no.\n");
        printf ("4. Exit\n");
        printf ("\n");

        printf ("Enter your Choice : ");
        scanf ("%d", &choice);
        printf("\n");

        switch (choice)
        {
            case 1 :
            
                printf ("Enter roll number : ");
                scanf ("%d", &s[n].roll_number);
                printf ("Enter Name : ");
                scanf (" %[^\n]", s[n].name);
                printf ("Enter Marks : ");
                scanf ("%f", &s[n].marks);

                n++ ;
                Sleep (2000);
                printf ("\nSTUDENT RECORD ADDED SUCCESSFULLY !\n");
                Sleep (2000);
                break;

            case 2 :
                 if (n == 0)
                 printf ("No Records Found.\n");

                 else{
                    printf ("\n       ***** STUDENT RECORD *****      \n");
                    printf ("\n----------------------------------------------------\n\n");
                    printf ("Roll Number\t Name\t\t Marks\n");
                    printf ("\n----------------------------------------------------\n");

                    for (i=0; i<n; i++)
                    {
                        printf ("%d\t %s\t\t %.2f\n", s[i].roll_number, s[i].name, s[i].marks);
                    }
                 }
                 break;

            case 3 :
            printf ("\n Enter Roll number to search : ");
            scanf ("%d", &roll);
            Sleep (2000);

            found = 0;

            for (i=0; i<n; i++)
            {
                if (s[i].roll_number == roll)
                {
                    printf ("\n STUDENT RECORD FOUND !\n\n");
                    printf ("Roll number : %d\n", s[i].roll_number);
                    printf ("Name        : %s\n", s[i].name);
                    printf ("Marks       : %.2f\n", s[i].marks);
                    Sleep (2000);

                    found = 1;
                    break;
                } 
            }
            if (found == 0)
            printf ("\nRecord not found !\n");
            break;

            case 4 :
              printf ("Exiting ...");
              return 0;

            default :
               printf ("Invalid Choice ! Try again.\n");
        }
    }

    return 0;
}