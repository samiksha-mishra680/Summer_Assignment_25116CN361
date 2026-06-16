// WAP to Selection sort

#include <stdio.h>
int main()
{
    int i, n, a[50];
    printf ("Enter number of elements : ");
    scanf ("%d", &n);

    for (i=0; i<n; i++)
    {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i]);
    }

    for (i=0; i<n-1; i++)
    {
        int swap;
        int min = i;

        for (int j=i+1; j<n; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }       

        swap = a[i];
        a[i] = a[min];
        a[min] = swap;
    }

    printf ("Sorted Array : \n");

    for (i=0; i<n; i++)
    {
        printf ("%d ", a[i]);
    }

    return 0;
}