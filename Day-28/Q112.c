// WAP to create contact management system

#include <stdio.h>
#include <windows.h>

struct Contact
{
    long long int number;
    char name[50];
    char email[50];
    char address[100];
};

int main()
{
    struct Contact c[100];
    int n = 0;
    int i, found, choice;
    long long int num;

    do
    {
         printf ("\n      ***** CONTACT MANAGEMENT SYSTEM *****     \n");
         printf ("\n");
         printf ("1. Add Contact\n");
         printf ("2. Display all Contacts\n");
         printf ("3. Search Contact\n");
         printf ("4. Update Contact \n");
         printf ("5. Delete Contact \n");
         printf ("6. Exit\n");
         printf ("\n");

         printf ("Enter your choice : ");
         scanf ("%d", &choice);
         printf ("\n");
         Sleep (2000);

         switch (choice)
         {
            case 1 :
               printf ("Enter Phone Number : ");
               scanf ("%lld", &c[n].number);

               printf ("Enter Name : ");
               scanf (" %[^\n]", c[n].name);

               printf ("Enter Email : ");
               scanf (" %[^\n]", c[n].email);

               printf ("Enter Address : ");
               scanf (" %[^\n]", c[n].address);

               n++ ;
               printf ("CONTACT ADDED SUCCESSFULLY !\n");
               printf ("\n");
               Sleep (2000);
               break;

               case 2 :
                if (n == 0)
                printf ("No Record Found !");

                else
                {
                   for (i=0; i<n; i++)
                   {
                    printf ("-------------------------------------------------\n");
                    printf ("Phone Number   : %lld\n", c[i].number);
                    printf ("Name           : %s\n", c[i].name);
                    printf ("Email          : %s\n", c[i].email);
                    printf ("Address        : %s\n", c[i].address);
                    printf ("-------------------------------------------------\n");
                   }
                   Sleep (2000);
                }
                break;

                case 3 :
                  found = 0;
                  printf ("Enter Phone Number to Search : ");
                  scanf ("%lld", &num);
                  printf ("\n");
                  Sleep (2000);

                  for (i=0; i<n; i++)
                  {

                    if (c[i].number == num)
                    {
                        found = 1;

                        printf ("Phone Number   : %lld\n", c[i].number);
                        printf ("Name           : %s\n", c[i].name);
                        printf ("Email          : %s\n", c[i].email);
                        printf ("Address        : %s\n", c[i].address);

                        Sleep (2000);
                        break;
                    }
                  }

                  if (found == 0)
                  {
                    printf ("NO RECORD FOUND !");
                    printf ("\n");
                  }
                  break;
    

                case 4 :

                  found = 0;

                   printf ("Enter Phone Number : ");
                   scanf ("%lld", &num);
                   printf ("\n");

                   for (i=0; i<n; i++)
                   {
                    if (c[i].number == num)
                    {
                        found = 1;

                        printf ("Enter new Details : \n");

                        printf ("Enter Phone Number : ");
                        scanf ("%lld", &c[i].number);

                        printf ("Enter Name : ");
                        scanf (" %[^\n]", c[i].name);

                        printf ("Enter Email : ");
                        scanf (" %[^\n]", c[i].email);

                        printf ("Enter Address : ");
                        scanf (" %[^\n]", c[i].address);

                        printf ("\n");
                        Sleep (2000);

                        printf ("CONTACT UPDATED SUCCESSFULLY !");
                        printf ("\n");
                        Sleep (2000);
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

                    printf ("Enter Phone Number : ");
                    scanf ("%lld", &num);
                    printf ("\n");
                    Sleep (2000);

                    for (i=0; i<n; i++)
                    {
                        if (c[i].number == num)
                        {
                           found = 1;

                         for (int j=i; j<n-1; j++)
                         {
                            c[j] = c[j+1]; 
                         }

                         n--;
                         printf ("CONTACT DELETED SUCCESSFULLY !");
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

                case 6 :
                      printf("Thank You!\n");
                      break;

                default:

                 printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}





    
    