// WAP to create menu-driven string operations system

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    do
    {
        printf("\n===== STRING OPERATIONS =====\n");
        printf ("\n");
        printf("1. Enter String\n");
        printf("2. Display String\n");
        printf("3. Find Length\n");
        printf("4. Copy String\n");
        printf("5. Concatenate Strings\n");
        printf("6. Compare Strings\n");
        printf("7. Reverse String\n");
        printf("8. Exit\n");
        printf ("\n");
        Sleep (2000);

        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf ("\n");
        Sleep (2000);

        switch(choice)
        {
            case 1:
                printf("Enter String: ");
                scanf ("%s", &str1);
                Sleep (2000);
                break;

            case 2:
                printf("String = %s\n", str1);
                Sleep (2000);
                printf ("\n");
                break;

            case 3:
                printf("Length = %d\n", strlen(str1));
                printf ("\n");
                Sleep (2000);
                break;

            case 4:
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                printf ("\n");
                Sleep (2000);
                break;

            case 5:
                printf("Enter another String: ");
                scanf ("%s", &str2);
                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                printf ("\n");
                Sleep (2000);
                break;

            case 6:
                printf("Enter another String: ");
                scanf ("%s", &str2);

                if(strcmp(str1, str2) == 0)     {
                    printf("Strings are Equal\n");
                    printf ("\n");
                    Sleep (2000);
                }
                else
                    printf("Strings are Not Equal\n");
                    Sleep (2000);
                break;

            case 7:
                strrev(str1);
                printf("Reversed String = %s\n", str1);
                printf ("\n");
                Sleep (2000);
                break;

            case 8:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 8);

    return 0;
}