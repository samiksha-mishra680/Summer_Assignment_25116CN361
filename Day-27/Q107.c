// WAP to create Salary management system. 

#include <stdio.h>
#include <windows.h>

struct Employee
{
    int emp_id;
    char name[50];
    char department[30];
    char designation[30];
    float basic_salary;
    float bonus;
    float deduction;
    float total_salary;
};

int main()
{
    struct Employee emp[100];
    int n = 0;
    int choice, i, id, found;

    do
    {
        printf("\n===== SALARY MANAGEMENT SYSTEM =====");
        printf ("\n\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf ("\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        printf ("\n");
        Sleep(2000);

        switch(choice)
        {
        case 1:

            printf("Enter Employee ID: ");
            scanf("%d", &emp[n].emp_id);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp[n].name);

            printf("Enter Department: ");
            scanf(" %[^\n]", emp[n].department);

            printf("Enter Designation: ");
            scanf(" %[^\n]", emp[n].designation);

            printf("Enter Basic Salary: ");
            scanf("%f", &emp[n].basic_salary);

            printf("Enter Bonus: ");
            scanf("%f", &emp[n].bonus);

            printf ("Enter Deductions : ");
            scanf ("%f", &emp[n].deduction);
            printf ("\n");
            Sleep (2000);

            emp[n].total_salary = emp[n].basic_salary + emp[n].bonus - emp[n].deduction;

            n++;
            printf("Employee Added Successfully!\n");
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
                    printf("\n------------------------------\n");
                    printf("Employee ID  : %d\n", emp[i].emp_id);
                    printf("Name         : %s\n", emp[i].name);
                    printf("Department   : %s\n", emp[i].department);
                    printf("Designation  : %s\n", emp[i].designation);
                    printf("Basic Salary : %.2f\n", emp[i].basic_salary);
                    printf("Bonus        : %.2f\n", emp[i].bonus);
                    printf ("Deductions  : %.2f\n", emp[i].deduction);
                    printf("Total Salary : %.2f\n", emp[i].total_salary);
                }
            }
            break;

        case 3:

            found = 0;

            printf("Enter Employee ID: ");
            scanf("%d", &id);

            for(i = 0; i < n; i++)
            {
                if(emp[i].emp_id == id)
                {
                    found = 1;

                    printf("\nEmployee ID  : %d\n", emp[i].emp_id);
                    printf("Name         : %s\n", emp[i].name);
                    printf("Department   : %s\n", emp[i].department);
                    printf("Designation  : %s\n", emp[i].designation);
                    printf("Basic Salary : %.2f\n", emp[i].basic_salary);
                    printf("Bonus        : %.2f\n", emp[i].bonus);
                    printf ("Deductions  : %.2f\n", emp[i].deduction);
                    printf("Total Salary : %.2f\n", emp[i].total_salary);

                    break;
                }
            }

            if(found == 0)
            {
                printf("Employee Not Found!\n");
            }

            break;

        case 4:

            found = 0;

            printf("Enter Employee ID: ");
            scanf("%d", &id);
            printf ("\n");

            for(i = 0; i < n; i++)
            {
                if(emp[i].emp_id == id)
                {
                    found = 1;

                    printf("Enter New Basic Salary: ");
                    scanf("%f", &emp[i].basic_salary);

                    printf("Enter New Bonus: ");
                    scanf("%f", &emp[i].bonus);

                    printf("Enter New Deductions: ");
                    scanf("%f", &emp[i].deduction);
                    printf ("\n");
                    Sleep (2000);


                    emp[i].total_salary = emp[i].basic_salary + emp[i].bonus - emp[i].deduction;

                    printf("Salary Updated Successfully!\n");

                    break;
                }
            }

            if(found == 0)
            {
                printf("Employee Not Found!\n");
            }

            break;

        case 5:

            found = 0;

            printf("Enter Employee ID: ");
            scanf("%d", &id);
            printf ("\n");
            Sleep (2000);

            for(i = 0; i < n; i++)
            {
                if(emp[i].emp_id == id)
                {
                    found = 1;

                    int j;

                    for(j = i; j < n - 1; j++)
                    {
                        emp[j] = emp[j + 1];
                    }

                    n--;

                    printf("Employee Deleted Successfully!\n");
                    Sleep (2000);

                    break;
                }
            }

            if(found == 0)
            {
                printf("Employee Not Found!\n");
            }

            break;

        case 6:

            printf("Thank You!\n");
            break;

        default:

            printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}