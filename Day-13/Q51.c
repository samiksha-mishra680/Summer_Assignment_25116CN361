// WAP to find largest and smallest element

#include <stdio.h>
int main()
{
    int n, i, a[50];
    printf ("Enter number of elements : ");
    scanf ("%d", &n);

    for (i=0; i<n; i++)
    {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i] );
    }

     int max = a[0];
     int min = a[0];

    for (i=0; i<n; i++)
    {
        if (a[i] > max)
        max = a[i];

        if (a[i] < min)
        min = a[i];
    }

    printf ("Largest element = %d\n", max);
    printf ("Smallest element = %d", min);

    return 0;
}