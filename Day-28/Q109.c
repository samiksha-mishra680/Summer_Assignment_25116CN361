// WAP to create library managemnt system.

#include <stdio.h>
#include <windows.h>

struct library
{
    int book_id;
    char title[50];
    char author[50];
    char publisher[50];
    float price;
    int quantity;
};

int main()
{
    struct library l[100];
    int n = 0;
    int i, found, choice, id;

    do
    {
         printf ("\n      ***** LIBRARY MANAGEMENT SYSTEM *****     \n");
         printf ("\n");
         printf ("1. Add Book\n");
         printf ("2. Display all Books\n");
         printf ("3. Search Book\n");
         printf ("4. Update Book \n");
         printf ("5. Delete Book \n");
         printf ("6. Exit\n");
         printf ("\n");

         printf ("Enter your choice : ");
         scanf ("%d", &choice);
         printf ("\n");
         Sleep (2000);

         switch (choice)
         {
            case 1 :
               printf ("Enter Book Id : ");
               scanf ("%d", &l[n].book_id);

               printf ("Enter Title : ");
               scanf (" %[^\n]", l[n].title);

               printf ("Enter Author : ");
               scanf (" %[^\n]", l[n].author);

               printf ("Enter Publisher : ");
               scanf (" %[^\n]", l[n].publisher);

               printf ("Enter Price : ");
               scanf ("%f", &l[n].price);

               printf ("Enter Quantity : ");
               scanf ("%d", &l[n].quantity);
               printf ("\n");
               Sleep (2000);

               n++ ;
               printf ("BOOK RECORD ADDED SUCCESSFULLY !\n");
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
                    printf ("Book Id   : %d\n", l[i].book_id);
                    printf ("Title     : %s\n", l[i].title);
                    printf ("\n");
                    printf ("Author    : %s\n", l[i].author);
                    printf ("Publisher : %s\n", l[i].publisher);
                    printf ("Price     : %.2f\n", l[i].price);
                    printf ("Quantity  : %d\n", l[i].quantity);
                    printf ("-------------------------------------------------\n");
                   }
                   Sleep (2000);
                }
                break;

                case 3 :
                  found = 0;
                  printf ("Enter Book Id to Search : ");
                  scanf ("%d", &id);
                  printf ("\n");
                  Sleep (2000);

                  for (i=0; i<n; i++)
                  {

                    if (l[i].book_id == id)
                    {
                        found = 1;

                        printf ("Book Id   : %d\n", l[i].book_id);
                        printf ("Title     : %s\n", l[i].title);
                        printf ("Author    : %s\n", l[i].author);
                        printf ("Publisher : %s\n", l[i].publisher);
                        printf ("Price     : %.2f\n", l[i].price);
                        printf ("Quantity  : %d\n", l[i].quantity);

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

                   printf ("Enter Book Id : ");
                   scanf ("%d", &id);
                   printf ("\n");

                   for (i=0; i<n; i++)
                   {
                    if (l[i].book_id == id)
                    {
                        found = 1;

                        printf ("Enter new Details : \n");

                        printf ("Enter Book Id : ");
                        scanf ("%d", &l[i].book_id);

                        printf ("Enter Title : ");
                        scanf (" %[^\n]", l[i].title);

                        printf ("Enter Author : ");
                        scanf (" %[^\n]", l[i].author);

                        printf ("Enter Publisher : ");
                        scanf (" %[^\n]", l[i].publisher);

                        printf ("Enter Price : ");
                        scanf ("%f", &l[i].price);

                        printf ("Enter Quantity : ");
                        scanf ("%d", &l[i].quantity);

                        printf ("\n");
                        Sleep (2000);

                        printf ("BOOK RECORD UPDATED SUCCESSFULLY !");
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

                    printf ("Enter Book Id : ");
                    scanf ("%d", &id);
                    printf ("\n");
                    Sleep (2000);

                    for (i=0; i<n; i++)
                    {
                        if (l[i].book_id == id)
                        {
                           found = 1;

                         for (int j=i; j<n-1; j++)
                         {
                            l[j] = l[j+1]; 
                         }

                         n--;
                         printf ("BOOK RECORD DELETED SUCCESSFULLY !");
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





    
    