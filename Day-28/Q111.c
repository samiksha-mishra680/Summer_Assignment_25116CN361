// WAP To create ticket booking system

#include <stdio.h>
#include <windows.h>

struct Ticket
{
    int ticket_id;
    char name[50];
    char source[50];
    char destination[50];
    char seat_no[10];
    float fare;
};

int main()
{
    struct Ticket t[100];
    int n = 0;
    int i, found, choice, id;

    do
    {
         printf ("\n      ***** TICKET BOOKING SYSTEM *****     \n");
         printf ("\n");
         printf ("1. Book a ticket\n");
         printf ("2. View all Tickets\n");
         printf ("3. Search Ticket\n");
         printf ("4. Cancel Ticket \n");
         printf ("5. Exit\n");
         printf ("\n");

         printf ("Enter your choice : ");
         scanf ("%d", &choice);
         printf ("\n");
         Sleep (2000);

         switch (choice)
         {
            case 1 :
               printf ("Ticket Id : ");
               scanf ("%d", &t[n].ticket_id);

               printf ("Name : ");
               scanf (" %[^\n]", t[n].name);

               printf ("Source : ");
               scanf (" %[^\n]", t[n].source);

               printf ("Destination : ");
               scanf (" %[^\n]", t[n].destination);

               printf ("Seat Number : ");
               scanf (" %[^\n]", &t[n].seat_no);

               printf ("Fare : ");
               scanf ("%f", &t[n].fare);
               printf ("\n");
               Sleep (2000);

               n++ ;
               printf ("\nTICKET BOOKED SUCCESSFULLY !\n");
               printf ("\n");
               Sleep (2000);
               break;

               case 2 :
                if (n == 0)
                printf ("No TICKET Found !");

                else
                {
                   for (i=0; i<n; i++)
                   {
                    printf ("-------------------------------------------------\n");
                    printf ("Ticket Id   : %d\n", t[i].ticket_id);
                    printf ("Name        : %s\n", t[i].name);
                    printf ("\n");
                    printf ("Source      : %s\n", t[i].source);
                    printf ("Destination : %s\n", t[i].destination);
                    printf ("Seat Number : %s\n", t[i].seat_no);
                    printf ("Fare        : %.2f\n", t[i].fare);
                    printf ("-------------------------------------------------\n");
                   }
                   Sleep (2000);
                }
                break;

                case 3 :
                  found = 0;
                  printf ("Enter Ticket Id to Search : ");
                  scanf ("%d", &id);
                  printf ("\n");
                  Sleep (2000);

                  for (i=0; i<n; i++)
                  {

                    if (t[i].ticket_id == id)
                    {
                        found = 1;

                        printf ("Ticket Id   : %d\n", t[i].ticket_id);
                        printf ("Name        : %s\n", t[i].name);
                        printf ("Source      : %s\n", t[i].source);
                        printf ("Destination : %s\n", t[i].destination);
                        printf ("Seat Number : %s\n", t[i].seat_no);
                        printf ("Fare        : %.2f\n", t[i].fare);

                        
                        Sleep (2000);
                        break;
                    }
                  }

                  if (found == 0)
                  {
                    printf ("NO TICKET FOUND !");
                    printf ("\n");
                  }
                  break;
    
                case 4 :

                    found = 0;

                    printf ("Enter Ticket Id : ");
                    scanf ("%d", &id);
                    printf ("\n");
                    Sleep (2000);

                    for (i=0; i<n; i++)
                    {
                        if (t[i].ticket_id == id)
                        {
                           found = 1;

                         for (int j=i; j<n-1; j++)
                         {
                            t[j] = t[j+1]; 
                         }

                         n--;
                         printf ("TICKET CANCELLED SUCCESSFULLY !");
                         printf ("\n");
                         Sleep (2000);

                         break;
                    }
                    }

                    if (found == 0)
                    {
                        printf ("NO TICKET FOUND !");
                        printf ("\n");
                        Sleep (2000);
                    }
                    break;

                case 5 :
                      printf("Thank You!\n");
                      break;

                default:

                 printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}





    
    