// WAP to create bank account system.

#include <stdio.h>
#include <windows.h>

struct Bank
{
    long long int acc_no;
    char name[50];
    char acc_type[50];
    float balance;
};

int main()
{
    struct Bank b[100];
    int n = 0;
    int i, found, choice;
    long long int ac;
    float amount;

    do
    {
         printf ("\n      ***** BANK ACCOUNT MANAGEMENT SYSTEM *****     \n");
         printf ("\n");
         printf ("1. Create Account\n");
         printf ("2. Display all accounts\n");
         printf ("3. Search account\n");
         printf ("4. Deposit Money \n");
         printf ("5. Withdraw Money\n");
         printf ("6. Delete Account \n");
         printf ("7. Exit\n");
         printf ("\n");

         printf ("Enter your choice : ");
         scanf ("%d", &choice);
         printf ("\n");
         Sleep (2000);

         switch (choice)
         {
            case 1 :
               printf ("Enter Account number : ");
               scanf ("%lld", &b[n].acc_no);

               printf ("Account Holder Name : ");
               scanf (" %[^\n]", b[n].name);

               printf ("Account Type : ");
               scanf (" %[^\n]", b[n].acc_type);

               printf ("Balance : ");
               scanf ("%f", &b[n].balance);

               printf ("\n");
               Sleep (2000);

               n++ ;
               printf ("ACCOUNT CREATED SUCCESSFULLY !\n");
               printf ("\n");
               Sleep (2000);
               break;

               case 2 :
                if (n == 0)
                printf ("NO RECORD FOUND !");
                    
                else
                {
                   for (i=0; i<n; i++)
                   {
                    printf ("-------------------------------------------------\n");
                    printf ("Account Number          : %lld\n", b[i].acc_no);
                    printf ("Account Holder Name     : %s\n", b[i].name);
                    printf ("\n");
                    printf ("Account Type            : %s\n", b[i].acc_type);
                    printf ("Initial Balance         : %.2f\n", b[i].balance);
                    printf ("-------------------------------------------------\n");
                   }
                   Sleep (2000);
                }
                break;

                case 3 :

                  found = 0;

                  printf ("Enter Account Number to Search : ");
                  scanf ("%lld", &ac);
                  printf ("\n");
                  Sleep (2000);

                  for (i=0; i<n; i++)
                  {

                    if (b[i].acc_no == ac)
                    {
                        found = 1;

                        printf ("Account Number          : %lld\n", b[i].acc_no);
                        printf ("Account Holder Name     : %s\n", b[i].name);
                        printf ("Account Type            : %s\n", b[i].acc_type);
                        printf ("Balance                 : %.2f\n", b[i].balance);

                        Sleep (2000);
                        break;
                    }
                  }

                  if (found == 0)
                  {
                    printf ("NO RECORD FOUND !");
                    printf ("\n");
                    Sleep (2000);
                  }
                  break;
    

                case 4 :

                  found = 0;

                   printf ("Enter Account Number : ");
                   scanf ("%lld", &ac);
                   printf ("\n");

                   for (i=0; i<n; i++)
                   {
                    if (b[i].acc_no == ac)
                    {
                        found = 1;

                        printf ("Enter amount to deposit : ");
                        scanf ("%f", &amount);

                        b[i].balance = b[i].balance + amount;

                        printf ("\n");
                        Sleep (2000);

                        printf ("AMOUNT DEPOSITED SUCCESSFULLY !");
                        printf ("\n");
                        Sleep (2000);
                        printf ("UPDATED BALANCE : %.2f\n",b[i].balance);
                        break;
                    }
                    }

                    if (found == 0)
                    {
                        printf ("NO RECORD FOUND !");
                    }
                    break;

                case 5 :

                     found = 0;

                     printf ("Enter Account Number : ");
                     scanf ("%lld", &ac);
                     printf ("\n");

                     for (i=0; i<n; i++)
                    {
                       if (b[i].acc_no == ac)
                       {
                           found = 1;

                            printf ("Enter amount to withdraw : ");
                            scanf ("%f", &amount);

                            if (amount <= b[i].balance)
                            {
                               b[i].balance = b[i].balance - amount;
                               printf ("AMOUNT WITHDRAWN SUCCESSFULLY !\n");
                               Sleep (2000);
                               printf ("UPDATED BALANCE : %.2f", b[i].balance);
                            }

                            else
                            printf ("Insufficient balance !\n");

                       break;
                        }
                    }

                    if (found == 0)
                    {
                        printf ("NO RECORD FOUND !\n");
                    }                
                    printf ("\n");
                    Sleep (2000);
                    break;

                case 6 :

                    found = 0;

                    printf ("Enter Account Number : ");
                    scanf ("%lld", &ac);
                    printf ("\n");
                    Sleep (2000);

                    for (i=0; i<n; i++)
                    {
                        if (b[i].acc_no == ac)
                        {
                           found = 1;

                         for (int j=i; j<n-1; j++)
                         {
                            b[j] = b[j+1]; 
                         }

                         n--;
                         printf ("ACCOUNT DELETED SUCCESSFULLY !");
                         printf ("\n");
                         Sleep (2000);

                         break;
                    }
                    }

                    if (found == 0)
                    {
                        printf ("NO RECORD FOUND !");
                        printf ("\n");
                        Sleep (2000);
                    }
                    break;

                case 7 :
                      printf("Thank You!\n");
                      break;

                default:

                 printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}





    
    