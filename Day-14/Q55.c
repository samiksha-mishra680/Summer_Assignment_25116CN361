// WAP to second largest element

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

    int max = a[0];
    int second_max = a[0];

    for (i=1; i<n; i++)
    {
        if (a[i] > max)   { 
           second_max = max;
           max = a[i];
        }

        else if (a[i] > second_max && a[i] != max)
        second_max = a[i];
    }

    printf ("The second largest element is %d", second_max);

    return 0;

}


    