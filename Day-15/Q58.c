// WAP to rotate array left

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

    printf ("Array after left rotation : \n");

    temp = a[0];                                   // storing element at index 0 in temp variable

    for (i=0; i<n-1; i++)                           // loop for left shifting by 1 position
    { 
        a [i] = a[i+1];
    }

    a[n-1] = temp;                                // putting last element as first element

    for (i=0; i<n; i++)                           // loop for printing the array
    {        
        printf ("%d ", a[i]);
    }

    return 0;
    
}