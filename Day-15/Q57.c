// WAP to reverse array

#include <stdio.h>
int main()
{
    int n, i, a[50];
    printf ("Enter number of elements : ");
    scanf ("%d", &n);

    for (i=0; i<n; i++)
    {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i]);
    }

    printf ("Reverse Array : \n");

    for (i=n-1; i>=0; i--)
    {
        printf ("%d ", a[i]);
    }

    return 0;
}