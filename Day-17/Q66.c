// WAP to union of arrays

#include <stdio.h>
int main()
{
    int i, n1, n2, a[50], b[50], c[100], j, k=0;
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

    for (i=0; i<n1; i++)                                        
    {
        int found = 0;
        for (j=0; j<k; j++)
        {
            if (a[i]== c[j])                                   // checking for duplicates in first array
            {
                found = 1;
                break;
            }
        }

        if (found == 0)   {                                   // entering first array's unique elements in third array
            c[k] = a[i];
            k++;  
        }   
    }

    for (i=0; i<n2; i++)
    {
        int found = 0;
        for (j=0; j<k; j++)
        {
            if (b[i] == c[j])                                 // checking for duplicates in second array
            {
                found = 1;
                break;
            }
        }

        if (found == 0)                                     // ignoring the duplicates and entering unique elements of second array to third array
        {
            c[k] = b[i];
            k++;
        }
    }

    printf ("Union of Arrays : \n");

    for (i=0; i<k; i++)                                      // printing the union array
    {
        printf ("%d ", c[i]);
    }

    return 0;
}