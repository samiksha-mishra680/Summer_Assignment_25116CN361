// WAP to intersection of arrays

#include <stdio.h>
int main()
{
    int i, n1, n2, a[50], b[50], c[100], k=0;
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
        for (int j=0; j<n2; j++)
        {
            if (a[i] == b[j])                                   // checking common elements in both arrays
            {
                int found =0;
                for (int p=0; p<k; p++)
                {
                    if (c[p] == a[i])  {                        // checking if element being entered is already present in the new array
                        found = 1;
                        break;
                    }
                }
                if (found == 0)  {
                    c[k] = a[i];
                    k++;
                }
                break;
            }
        }
    }

    printf ("Intersection of arrays : \n");                    // printing the  intersection of arrrays
    for (i=0; i<k; i++)
    {
        printf ("%d ", c[i]);
    }

    return 0;
}

    