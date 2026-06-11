// WAP to input and display array

#include <stdio.h>
int main ()
{
     int n, i, a[50];
    printf ("Enter number of elements : ");
    scanf ("%d", &n);

    for (i=0; i<n; i++)
    {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i] );
    }

    for (i=0; i<n; i++)
    {
        printf ("%d ", a[i]);
    }
    return 0;
}