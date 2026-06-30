// WAP to create mini employee management system

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    int id[100];
    char name [100][50];
    int age [100];
    char department [100][50];
    char designation [100][50];
    float salary [100];

    int n = 0;
    int choice, i, found;
    int searchID;

    do
    {
        printf ("\n      ***** EMPLOYEE MANAGEMENT SYSTEM ******     \n");
        printf ("\n");
        printf ("1. Add Employee\n");
        printf ("2. Display all Employees\n");
        printf ("3. Search Employee\n");
        printf ("4. Update Employee\n");
        printf ("5. Delete Employee\n");
        printf ("6. Exit\n");
        printf ("\n");

        printf ("Enter Choice : ");
        scanf ("%d", &choice);
        printf ("\n");
        Sleep (2000);

        switch (choice)
        {
            case 1 :
              printf ("Enter Employee Id : ");
              scanf ("%d", &id[n]);

              printf ("Enter Name : ");
              scanf (" %[^\n]", name[n]);

              printf ("Enter Age : ");
              scanf ("%d", &age[n]);

              printf ("Enter Department : ");
              scanf (" %[^\n]", department[n]);

              printf ("Enter Designation : ");
              scanf (" %[^\n]", designation[n]);

              printf ("Enter Salary : ");
              scanf ("%f", &salary[n]);
              printf ("\n");
              Sleep (2000);

              printf ("EMPLOYEE ADDED SUCCESSFULLLY !\n");
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
                printf ("------------------- EMPLOYEE RECORD --------------------\n");
                for (i=0; i<n; i++) 
                {
                  
                  printf ("\n");
                  printf ("-----------------------------------------------------\n");
                  printf ("Employee Id   : %d\n", id[i]);
                  printf ("Name          : %s\n", name[i]);
                  printf ("Age           : %d\n", age[i]);
                  printf ("Department    : %s\n", department[i]);
                  printf ("Dssignation   : %s\n", designation[i]);
                  printf ("Salary        : %.2f\n", salary[i]);
                  printf ("-----------------------------------------------------\n");
                  printf ("\n");
                }
                }
                break;

            case 3 :
                printf ("Enter Employee Id to search : ");
                scanf ("%d", &searchID);
                printf ("\n");
                Sleep (2000);

                for (i=0; i<n; i++)
                {
                    found = 0;
                    if (id[i] == searchID)
                    {
                        found = 1;
                        printf ("-----------------------------------------------------\n");
                        printf ("Employee Id   : %d\n", id[i]);
                        printf ("Name          : %s\n", name[i]);
                        printf ("Age           : %d\n", age[i]);
                        printf ("Department    : %s\n", department[i]);
                        printf ("Dssignation   : %s\n", designation[i]);
                        printf ("Salary        : %.2f\n", salary[i]);
                        printf ("-----------------------------------------------------\n");
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
                found = 0;
                printf ("Enter Employee Id : ");
                scanf ("%d", &searchID);
                printf ("\n");
                Sleep (2000);

                for (i=0; i<n; i++)
                {
                    if (id[i] == searchID)
                    {
                        found = 1;

                        printf ("Enter New Details : \n ");
                        printf ("\n");
                        Sleep (1500);

                        printf ("Employee Id : ");
                        scanf ("%d", &id[n]);

                        printf ("Name : ");
                        scanf (" %[^\n]", name[n]);

                        printf ("Age : ");
                        scanf ("%d", &age[n]);

                        printf ("Department : ");
                        scanf (" %[^\n]", department[n]);

                        printf ("Designation : ");
                        scanf (" %[^\n]", designation[n]);

                        printf ("Salary : ");
                        scanf ("%f", &salary[n]);
                        printf ("\n");
                        Sleep (2000);
 
                        printf ("EMNPLOYEE RECORD UPDATED SUCCESSFULLLY !\n");
                        printf ("\n");
                        Sleep (2000);
                    }
                }

                if (found == 0)
                {
                    printf ("NO RECORDS FOUND !\n");
                    printf ("\n");
                    Sleep (1500);
                }

                break;

            case 5 :
                 found = 0;
                 printf ("Enter Employee Id : ");
                 scanf ("%d", &searchID);
                 printf ("\n");
                 Sleep (2000);

                 for (i=0; i<n; i++)
                 {
                    if (id[i] == searchID)
                    {
                        found = 1;
                        for (int j=i; j<n-1; j++)
                        {
                            id [j] = id [j+1];
                            strcpy (name[j], name[j+1]);
                            age [j] = age [j+1];
                            strcpy (department[j], department[j+1]);
                            strcpy (designation [j], designation [j+1]);
                            salary [j] = salary [j+1];
                        }
                        printf ("EMPLOYEE RECORD DELETED SUCCESSULLY !\n");
                        Sleep (2000);
                        break;
                    }
                }
                    if (found == 0)
                    {
                        printf ("NO RECORD FOUND ! \n");
                        Sleep (1500);
                    }

                    break;
                
            case 6 :
                printf ("Thank you !\n");
                break;

            default :
                printf ("INVALID CHOICE\n");
                Sleep (2000);  
        }
    
    }

    while (choice != 6);

    return 0;
}

