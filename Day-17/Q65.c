// WAP to merge arrays

#include <stdio.h>
int main()
{
    int i, n1, n2, a[50], b[50], c[100];

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
 
    for (i=0; i<n1; i++)                                        // entering first array's elements in third array
    {
        c[i] = a[i];
    }

    for (i=0; i<n2; i++)                                        // merging second array's elements in third array
    {
        c[n1 + i] = b[i];
    }

    printf ("Merged Array : \n");

    for (i=0; i< n1+n2; i++)                                     // printing the merged array
    {
        printf ("%d ", c[i]);
    }
}