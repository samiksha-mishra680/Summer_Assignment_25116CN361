// WAP to create marksheet generation system

#include <stdio.h>
#include <windows.h>

struct Student
{
    int roll;
    char name[50];
    int maths, eng, sci, social_sci, hindi;
    int total;
    float percentage;
    char grade;
};

int main()
{
    struct Student s[100];
    int n = 0;
    int choice, i, roll, found;

    do
    {
        printf("\n====== MARKSHEET GENERATION SYSTEM ======\n\n");
        printf("1. Add Student\n");
        printf("2. Display All Marksheets\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf ("\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf ("\n");
        Sleep (2000);

        switch(choice)
        {
        case 1:

            printf("Enter Roll Number: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf(" %[^\n]", s[n].name);
            printf ("\n");

            printf("Enter Marks of 5 Subjects:\n");
            printf ("English = ");
            scanf ("%d", &s[n].eng);
            printf ("Hindi = ");
            scanf ("%d", &s[n].hindi);
            printf ("Mathematics = ");
            scanf ("%d", &s[n].maths);
            printf ("Science = ");
            scanf ("%d", &s[n].sci);
            printf ("Social Science = ");
            scanf ("%d", &s[n].social_sci);
            printf ("\n");

            s[n].total = s[n].eng + s[n].hindi + s[n].maths + s[n].sci + s[n].social_sci;
            s[n].percentage = s[n].total / 5.0;

            if (s[n].percentage >= 90)
            s[n].grade = 'A';

            else if (s[n].percentage >= 75)
            s[n].grade = 'B';

            else if (s[n].percentage >= 60)
            s[n].grade = 'C';

            else if (s[n].percentage >= 40)
            s[n].grade = 'D';

            else
            s[n].grade = 'F';

            n++;
            printf("Student Added Successfully!\n");
            Sleep (2000);
            break;

        case 2:

            if(n == 0)
            {
                printf("No Records Found!\n");
            }
            else
            {
                for(i = 0; i < n; i++)
                {
                    printf("\n---------------------------------------------------\n");
                    printf("Roll No : %d\n", s[i].roll);
                    printf("Name    : %s\n", s[i].name);
                    printf("---------------------------------------------------\n");
                    printf("     **** Marks ****  \n");
                    printf("---------------------------------------------------\n");
                    printf ("English        = %d\n", s[i].eng);
                    printf ("Hindi          = %d\n", s[i].hindi);
                    printf ("Mathematics    = %d\n", s[i].maths);
                    printf ("Science        = %d\n", s[i].sci);
                    printf ("Social Science = %d\n", s[i].social_sci);    
                    printf ("\n");
                    Sleep(2000);

                    printf("Total      : %d\n", s[i].total);
                    printf("Percentage : %.2f\n", s[i].percentage);
                    printf("Grade      : %c\n", s[i].grade);
                    printf ("\n");
                    Sleep (2000);

                    if(s[i].eng>=40 && s[i].hindi>=40 && s[i].maths>=40 &&
                       s[i].sci>=40 && s[i].social_sci>=40)
                    printf("Result : PASS\n");

                    else
                    printf("Result : FAIL\n");
                }
            }
            break;

        case 3:

            found = 0;
            printf("Enter Roll Number: ");
            scanf("%d", &roll);

            for(i = 0; i < n; i++)
            {
                if(s[i].roll == roll)
                {
                    found = 1;

                    printf("\nRoll No  : %d\n", s[i].roll);
                    printf("Name       : %s\n", s[i].name);
                    printf("Total      : %d\n", s[i].total);
                    printf("Percentage : %.2f\n", s[i].percentage);
                    printf("Grade      : %c\n", s[i].grade);

                     if(s[i].eng>=40 && s[i].hindi>=40 && s[i].maths>=40 &&
                       s[i].sci>=40 && s[i].social_sci>=40)
                    printf("Result : PASS\n");

                    else
                    printf("Result : FAIL\n");
                    break;
                }
              }
            

            if(found == 0)
                printf("Student Not Found!\n");

            break;

        case 4:

            found = 0;
            printf("Enter Roll Number: ");
            scanf("%d", &roll);
            printf ("\n");

            for(i = 0; i < n; i++)
            {
                if(s[i].roll == roll)
                {
                    found = 1;

                    printf("Enter New Marks: ");
                    printf ("\n\n");
                    printf ("English        =  ");
                    scanf ("%d", &s[i].eng);
                    printf ("\n");
                    printf ("Hindi          =  ");
                    scanf ("%d", &s[i].hindi);
                    printf ("\n");
                    printf ("Mathematics    =  ");
                    scanf ("%d", &s[i].maths);
                    printf ("\n");
                    printf ("Science        =  ");
                    scanf("%d", &s[i].sci);
                    printf ("\n");
                    printf ("Social Science =  ");
                    scanf("%d", &s[i].social_sci);
                    printf ("\n");

                    s[i].total = s[i].eng + s[i].hindi + s[i].maths + s[i].sci + s[i].social_sci;
                    s[i].percentage =  s[i].total  / 5.0;

                    if(s[i].percentage >= 90)
                        s[i].grade = 'A';
                    else if(s[i].percentage >= 75)
                        s[i].grade = 'B';
                    else if(s[i].percentage >= 60)
                        s[i].grade = 'C';
                    else if(s[i].percentage >= 40)
                        s[i].grade = 'D';
                    else
                        s[i].grade = 'F';

                    printf("Record Updated Successfully!\n");
                    break;
                }
            }

            if(found == 0)
                printf("Student Not Found!\n");

            break;

        case 5:

            found = 0;
            printf("Enter Roll Number: ");
            scanf("%d", &roll);

            for(i = 0; i < n; i++)
            {
                if(s[i].roll == roll)
                {
                    found = 1;

                    int j;
                    for(j = i; j < n - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }

                    n--;
                    printf("Record Deleted Successfully!\n");
                    break;
                }
            }

            if(found == 0)
                printf("Student Not Found!\n");

            break;

        case 6:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(choice != 6);

}