// WAP to create mini library system.

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    int book_id[100];
    char name [100][50];
    char author [100][50];
    char publisher [100][50];
    float price [100];
    int quantity [100];

    int n = 0;
    int choice, i, found;
    int searchID;

    do
    {
        printf ("\n      ***** LIBRARY RECORD SYSTEM ******     \n");
        printf ("\n");
        printf ("1. Add Book\n");
        printf ("2. Display all Books\n");
        printf ("3. Search Book\n");
        printf ("4. Update Book\n");
        printf ("5. Delete Book\n");
        printf ("6. Exit\n");
        printf ("\n");

        printf ("Enter Choice : ");
        scanf ("%d", &choice);
        printf ("\n");
        Sleep (2000);

        switch (choice)
        {
            case 1 :
              printf ("Enter Book Id : ");
              scanf ("%d", &book_id[n]);

              printf ("Enter Name : ");
              scanf (" %[^\n]", name[n]);

              printf ("Enter Author : ");
              scanf (" %[^\n]", author[n]);

              printf ("Enter Publisher : ");
              scanf (" %[^\n]", publisher[n]);

              printf ("Enter Price : ");
              scanf ("%f", &price[n]);

              printf ("Enter Quantity : ");
              scanf ("%d", &quantity[n]);
              printf ("\n");
              Sleep (2000);

              printf ("BOOK ADDED SUCCESSFULLLY !\n");
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
                printf ("------------------- BOOK RECORD --------------------\n");
                for (i=0; i<n; i++) 
                {
                  
                  printf ("\n");
                  printf ("-----------------------------------------------------\n");
                  printf ("Book Id   : %d\n", book_id[i]);
                  printf ("Name      : %s\n", name[i]);
                  printf ("Author    : %s\n", author[i]);
                  printf ("Publisher : %s\n", publisher[i]);
                  printf ("Price     : %.2f\n", price[i]);
                  printf ("Qunatity  : %d\n", quantity[i]);
                  printf ("-----------------------------------------------------\n");
                  printf ("\n");
                }
                }
                break;

            case 3 :
                printf ("Enter Book Id to search : ");
                scanf ("%d", &searchID);
                printf ("\n");
                Sleep (2000);

                for (i=0; i<n; i++)
                {
                    found = 0;
                    if (book_id[i] == searchID)
                    {
                        found = 1;
                        printf ("-----------------------------------------------------\n");
                        printf ("Book Id   : %d\n", book_id[i]);
                        printf ("Name      : %s\n", name[i]);
                        printf ("Author    : %s\n", author[i]);
                        printf ("Publisher : %s\n", publisher[i]);
                        printf ("Price     : %.2f\n", price[i]);
                        printf ("Qunatity  : %d\n", quantity[i]);
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
                printf ("Enter Book Id : ");
                scanf ("%d", &searchID);
                printf ("\n");
                Sleep (2000);

                for (i=0; i<n; i++)
                {
                    if (book_id[i] == searchID)
                    {
                        found = 1;

                        printf ("Enter New Details : \n ");
                        printf ("\n");
                        Sleep (1500);

                        printf ("Book Id : ");
                        scanf ("%d", &book_id[n]);

                        printf ("Name : ");
                        scanf (" %[^\n]", name[n]);

                        printf ("Author : ");
                        scanf (" %[^\n]", author[n]);

                        printf ("Publisher : ");
                        scanf (" %[^\n]", publisher[n]);

                        printf ("Price : ");
                        scanf ("%f", &price[n]);

                        printf ("Quantity : ");
                        scanf ("%d", &quantity[n]);
                        printf ("\n");
                        Sleep (2000);

                        printf ("BOOK UPDATED SUCCESSFULLLY !\n");
                        printf ("\n");
                        Sleep (2000);
                        break;
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
                 printf ("Enter Book Id : ");
                 scanf ("%d", &searchID);
                 printf ("\n");
                 Sleep (2000);

                 for (i=0; i<n; i++)
                 {
                    if (book_id[i] == searchID)
                    {
                        found = 1;
                        for (int j=i; j<n-1; j++)
                        {
                            book_id [j] = book_id [j+1];
                            strcpy (name[j], name[j+1]);
                            strcpy (author[j], author[j+1]);
                            strcpy (publisher [j], publisher [j+1]);
                            price [j] = price [j+1];
                            quantity [j] = quantity [j+1];
                        }
                         printf ("BOOK RECORD DELETED SUCCESSULLY !\n");
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

