// WAP to Sort names alphabetically.

#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, n;
    char name[20][50], temp[50];

    printf ("Enter number of names : ");
    scanf ("%d", &n);

    printf ("Enter the names :");
    for (i=0; i<n; i++)
    {
        printf ("name[%d] =  ", i);
        scanf ("%s", name[i]);
    }

    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (strcmp (name[i], name[j]) > 0)
            {
                strcpy (temp, name[i]);
                strcpy (name[i], name[j]);
                strcpy (name[j], temp);
            }
        }
    }

    printf ("Sorted Names : \n");

    for (i=0; i<n; i++)
    {
        printf ("%s\n", name[i]);
    }

    return 0;
}