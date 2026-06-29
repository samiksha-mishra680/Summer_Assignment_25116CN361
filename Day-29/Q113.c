// WAP to create menu-driven calculator

#include <stdio.h>
#include <windows.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        printf("\n===== CALCULATOR MENU =====\n");
        printf ("\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf ("\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf ("\n");

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            printf ("\n");
            Sleep (2000);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result = %.2f\n", result);
                Sleep (2000);
                break;

            case 2:
                result = num1 - num2;
                printf("Result = %.2f\n", result);
                Sleep (2000);
                break;

            case 3:
                result = num1 * num2;
                printf("Result = %.2f\n", result);
                Sleep (2000);
                break;

            case 4:
                if (num2 != 0)   {
                    printf("Result = %.2f\n", num1 / num2);
                    Sleep (2000);
                }
                else  {
                    printf("Error! Division by zero is not allowed.\n");
                    Sleep (2000);
                }
                break;

            case 5:
                printf("Exiting Calculator...\n");
                break;

            default:
                printf("Invalid Choice! Please try again.\n");
                Sleep (2000);
        }

    } while (choice != 5);

    return 0;
}