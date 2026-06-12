// WAP to Linear search

#include <stdio.h>
int main()
{
    int n, i, a[50], k, pos=-1;
    printf ("Enter number of elements : ");
    scanf ("%d", &n);

    for (i=0; i<n; i++)
    {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i]);
    }

    printf ("Enter the element to be searched = ");
    scanf ("%d", &k);

    for (i=0; i<n; i++)
    {
        if (a[i] == k)  {
           pos = i;
           break;
        }
    }

    if (pos == -1)
    printf ("Element not found.");

    else
    printf ("The element %d is present at %d index.", k, pos);

    return 0;

}