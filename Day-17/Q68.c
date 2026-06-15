// WAP to find common elements

#include <stdio.h>
int main()
{
    int i, n1, n2, a[50], b[50], j;
    printf ("Enter number of elements in first array : ");           
    scanf ("%d", &n1);
    for (i=0; i<n1; i++)                                        // Entering elements in first array
    {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i]);
    }

    printf ("Enter elements in second array : ");              
    scanf ("%d", &n2);
    for (i=0; i<n2; i++)                                        // Entering elements in second array
    {
        printf ("b[%d] = ", i);
        scanf ("%d", &b[i]);
    }

    printf ("Common Elements : \n");

    for (i=0; i<n1; i++)
    {
        for (j=0; j<n2; j++)
        {   
            if (a[i] == b[j])                                   // Checking for common elements
            { 
                printf ("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}