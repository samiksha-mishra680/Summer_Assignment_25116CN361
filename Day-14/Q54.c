// WAP to frequency of an element

#include <stdio.h>
int main()
{
    int n, i, a[50], k, count=0;
    printf ("Enter number of elements : ");
    scanf ("%d", &n);

    for (i=0; i<n; i++)
    {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i]);
    }

    printf ("Enter the element to find its frequency : ");
    scanf ("%d", &k);

    for (i=0; i<n; i++)
    {
        if (a[i] == k)
        count ++ ;
    }

    printf ("Frequency of element %d is %d", k, count);

    return 0;
}
