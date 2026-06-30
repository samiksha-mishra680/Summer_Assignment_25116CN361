// WAP to develop complete mini project using arrays, strings and functions

// Event Registration Management System

#include <stdio.h>
#include <string.h>
#include <windows.h>

int id [100];
char name [100][50];
int age [100];
char college [100][100];
char event [100][50];
long long int contact [100];
float fee [100];
char status [100][20];
int i, n=0, searchId, found;

void RegisterParticipant ();
void DisplayParticipant ();
void SearchParticipant ();
void UpdateParticipant ();
void DeleteParticipant ();

int main()
{
    int choice;

    do
    {
        printf ("\n     ****** EVENT MANAGEMENT SYSTEM     ******\n");
        printf ("\n");
        printf ("1. Register Participant\n");
        printf ("2. Display all Participants\n");
        printf ("3. Search Participant\n");
        printf ("4. Update Participant\n");
        printf ("5. Delete Participant\n");
        printf ("6. Exit\n");
        printf ("\n");

        printf ("Enter choice : ");
        scanf ("%d", &choice);
        printf ("\n");

        switch (choice)
        {
            case 1 :
            RegisterParticipant ();
            break;

            case 2 :
            DisplayParticipant ();
            break;

            case 3 :
            SearchParticipant ();
            break;

            case 4 :
            UpdateParticipant ();
            break;

            case 5 :
            DeleteParticipant ();
            break;

            case 6 :
            printf ("\n THANK YOU !\n");
            Sleep (1000);
            break;

            default :
            printf ("INVALID CHOICE :\n");
            printf ("\n");
            Sleep (1500);
        }
    }
    while (choice != 6);

    return 0;
}

void RegisterParticipant ()
{
    printf ("Enter Registration Id : ");
    scanf ("%d", &id[n]);

    printf ("Enter name of participant : ");
    scanf (" %[^\n]", name[n]);

    printf ("Enter Age : ");
    scanf ("%d", &age[n]);

    printf ("Enter College Name : ");
    scanf (" %[^\n]", college[n]);

    printf ("Enter Event : ");
    scanf (" %[^\n]", event[n]);

    printf ("Enter Contact No. : ");
    scanf ("%lld", &contact[n]);

    printf ("Enter Registration fee : ");
    scanf ("%f", &fee[n]);

    printf ("Status : ");
    scanf ("%s", status[n]);
    printf ("\n");
    Sleep (1500);
            
    printf ("REGISTRATION IS DONE SUCCESSFULLY !\n");
    n++ ;
    printf ("\n");
    Sleep (1500);
}

void DisplayParticipant ()
{
    if (n == 0)
    {
        printf ("NO RECORD FOUND !\n");
        Sleep (1500);
    }

    else  {
    for (i=0; i<n; i++)
    {
            printf ("\n----------------------------------------------\n");
            printf ("Registration Id  : %d\n", id[i]);
            printf ("Name             : %s\n", name[i]);
            printf ("Age              : %d\n", age[i]);
            printf ("College Name     : %s\n", college[i]);
            printf ("Event Name       : %s\n", event[i]);
            printf ("Contact Number   : %lld\n", contact[i]);
            printf ("Registration fee : %.2f\n", fee[i]);
            printf ("Status           : %s\n", status[i]);
            printf ("----------------------------------------------\n");
            printf ("\n");
    }
    }
}

void SearchParticipant ()
{
    printf ("Enter Participant Id : ");
    scanf ("%d", &searchId);
    printf ("\n");

    found = 0;

    for (i=0; i<n; i++)
    {
        if (id[i] == searchId)
        {
            found = 1;

            printf ("\n----------------------------------------------\n");
            printf ("Id               : %d\n", id[i]);
            printf ("Name             : %s\n", name[i]);
            printf ("Age              : %d\n", age[i]);
            printf ("College Name     : %s\n", college[i]);
            printf ("Event Name       : %s\n", event[i]);
            printf ("Contact Number   : %lld\n", contact[n]);
            printf ("Registration fee : %.2f\n", fee[i]);
            printf ("Status           : %s\n", status[i]);
            printf ("----------------------------------------------\n");
            printf ("\n");
            Sleep (1500);
            break;
        }    
    }
    if (found == 0)
    {
        printf ("PARTICIPANT NOT FOUND\n");
        printf ("\n");
        Sleep (1500);
    }
}

void UpdateParticipant ()
{
    printf ("Enter Participant Id : ");
    scanf ("%d", &searchId);
    printf ("\n");

    found = 0;

    for (i=0; i<n; i++)
    {
        if (id[i] == searchId)
        {
            found = 1;

            printf ("Enter New Details : ");
            printf ("\n");

            printf ("Registration Id : ");
            scanf ("%d", &id[i]);

            printf ("Name of participant : ");
            scanf (" %[^\n]", name[i]);

            printf ("Age : ");
            scanf ("%d", &age[i]);

            printf ("College Name : ");
            scanf (" %[^\n]", college[i]);

            printf ("Event : ");
            scanf (" %[^\n]", event[i]);

            printf ("Contact No. : ");
            scanf ("%lld", &contact[i]);

            printf ("Registration fee : ");
            scanf ("%f", &fee[i]);

            printf ("Status : ");
            scanf ("%s", status[i]);
            printf ("\n");
            Sleep (1500);
            
            printf ("RECORD UPDATED SUCCESSFULLY !\n");
            printf ("\n");
            Sleep (1500);
            break;
        }
    }
    if (found == 0)
    {
        printf ("PARTICIPANT NOT FOUND !\n");
        printf ("\n");
        Sleep (1500);
    }
}

void DeleteParticipant ()
{
    printf ("Enter Participant Id : ");
    scanf ("%d", &searchId);
    printf ("\n");

    found = 0;

    for (i=0; i<n; i++)
    {
        if (id[i] == searchId)
        {
            found = 1;

            for (int j=i; j<n-1; j++)
            {
                id [j] = id[j+1];
                strcpy (name [j], name [j+1]);
                age [j] = age [j+1];
                strcpy (college [j], college [j+1]);
                strcpy (event [j], event [j+1]);
                contact [j] = contact [j+1];
                fee [j] = fee [j+1];
                strcpy (status [j], status [j+1]);
            }
            n-- ;
            printf ("RECORD DELETED SUCCESSFULLY !\n");
            printf ("\n");
            Sleep (1500);
            break;
        }
    }

    if (found == 0)
    {
        printf ("PARTICIPANT NOT FOUND !\n");
        printf ("\n");
        Sleep (1500);
    }
}