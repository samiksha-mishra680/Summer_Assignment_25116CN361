// WAP to rotate array right

#include <stdio.h>
int main()
{
    int n, i, a[50], temp;
    printf ("Enter number of elements : ");
    scanf ("%d", &n);

    for (i=0; i<n; i++)
    {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i]);
    }

    printf ("Array after right rotation : \n");

    temp = a[n-1];                                    // storing last element in temp variable

    for (i=n-1; i>=1; i--)                             // loop for right shifting by 1 position 
    { 
        a[i] = a[i-1];
    }

    a[0] = temp;                                      // putting first element as last element

    for (i=0; i<n; i++)                               // Printing the new array
    { 
        printf ("%d ", a[i]);
    }

    return 0;
}