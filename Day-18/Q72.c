// WAP to sort array in descending order

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

    for (i=0; i<n; i++)
    {
        int swap;
        for (int j=i+1; j<n; j++)
        {
            if (a[i] < a[j])
            {
                swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }

    printf ("Sorted Array : \n");

    for (i=0; i<n; i++)
    {
        printf ("%d ", a[i]);
    }

    return 0;
}

