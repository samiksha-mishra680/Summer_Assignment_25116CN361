// WAP to create ATM simulation.

#include <stdio.h>
#include <windows.h>
int main()
{
    float balance = 5000, amount;
    int choice;

    while(1)
    {
        printf ("\n========ATM MENU========\n");
        printf ("\n****  CHOICES  ****\n");
        printf ("1. Check Balance\n");
        printf ("2. Withdraw Cash\n");
        printf ("3. Deposit Cash\n");
        printf ("4. Quit\n\n");

        printf ("Enter your choice : ");
        scanf ("%d", &choice);
        printf ("\n");

        printf ("Loading...");
        printf ("\n\n");
        Sleep (2000);

        switch (choice)
        {
        case 1 :
            printf ("Current Balance = %.2f", balance);
            Sleep (2000);
            printf ("\n");
            break;

        case 2 :
             printf ("Enter the amount to withdraw : ");
             scanf ("%f", &amount);
             printf ("\n");
            
             if (amount <= balance)  
             {
                 printf ("Collect your cash...");
                 printf ("\n\n");
                 Sleep (2000);
                 balance = balance - amount;
                 printf ("Remaining Balance : %.2f", balance);
                 printf ("\n");
             }

             else
             printf ("Low Balance.");
             printf ("\n");
             break;

        case 3 : 
            printf ("Enter the amount to deposit : ");
            scanf ("%f", &amount);
            printf ("\n");
            printf ("Wait...");
            printf ("\n\n");
            Sleep (2000);
            balance = balance + amount;
            printf ("Amount Deposited Successfully.\n\n");
            Sleep (2000);
            printf ("Updated Balance = %.2f", balance);
            printf ("\n\n");
            break;

        case 4 :
            printf ("Thankyou for using ATM !\n");
            return 0;

        default : 
             printf ("Invalid Choice !\n");
        
        }
    }

    return 0;
    }

