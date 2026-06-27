// WAP to create employee management system. 

#include <stdio.h>
#include <windows.h>

struct Employee
{
    int emp_id ;
    char name[50];
    int age;
    char department [30];
    char designation [30];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n = 0;
    int choice, i, id, found;

    while (1)
    {
        printf ("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf ("\n");
        printf ("1. Add Employee \n");
        printf ("2. Display All Employees\n");
        printf ("3. Search Employee by employee id\n");
        printf ("4. Exit\n");
        printf ("\n");

        printf ("Enter your Choice : ");
        scanf ("%d", &choice);
        printf("\n");

        switch (choice)
        {
            case 1 :
            
                printf ("Enter Employee id : ");
                scanf ("%d", &emp[n].emp_id);
                printf ("Enter Name : ");
                scanf (" %[^\n]", emp[n].name);
                printf ("Enter Age : ");
                scanf ("%d", &emp[n].age);
                printf ("Enter Department : ");
                scanf (" %[^\n]", emp[n].department);
                printf ("Enter Designation : ");
                scanf (" %[^\n]", emp[n].designation);
                printf ("Enter Salary : ");
                scanf ("%f", &emp[n].salary);

                n++ ;
                Sleep (2000);
                printf ("\nEMPLOYEE RECORD ADDED SUCCESSFULLY !\n");
                Sleep (2000);
                break;

            case 2 :
                 if (n == 0)
                 printf ("No Records Found.\n");

                 else{
                    printf ("\n         ******* EMPLOYEE RECORD *******        \n");
                    printf ("\n------------------------------------------------------------------------------------\n\n");
                    printf ("Employee ID\t  Name\t\t Age    Department   Designation     Salary\t \n");
                    printf ("\n--------------------------------------------------------------------------------------\n");

                    for (i=0; i<n; i++)
                    {
                        printf ("%d\t\t %s   %d   %s\t\t %s\t %.2f\t", emp[i].emp_id, emp[i].name, emp[i].age, emp[i].department, emp[i].designation, emp[i].salary);
                    }
                    printf ("\n");
                 }
                 break;

            case 3 :
            printf ("\n Enter Employee ID to search : ");
            scanf ("%d", &id);
            Sleep (2000);

            found = 0;

            for (i=0; i<n; i++)
            {
                if (emp[i].emp_id == id)
                {
                    printf ("\n-------------------------------------\n");
                    printf ("\n EMPLOYEE RECORD FOUND !\n\n");
                    printf ("-------------------------------------\n");
                    printf ("Employee Id : %d\n", emp[i].emp_id);
                    printf ("Name        : %s\n", emp[i].name);
                    printf ("Age         : %d\n", emp[i].age);
                    printf ("Department  : %s\n", emp[i].department);
                    printf ("Designation : %s\n", emp[i].designation);
                    printf ("Salary      : %.2f\n", emp[i].salary);
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