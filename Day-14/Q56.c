// WAP to move zeroes to end

#include <stdio.h>
int main()
{
    int n, i, j, a[50];
    printf ("Enter number of elements : ");
    scanf ("%d", &n);

    for (i=0; i<n; i++)                            // loop fo array input
    {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i]);
    }

    for (i=0; i<n; i++)                            // outer loop fo passes
    {
        for (j=0; j<n-i-1; j++)                      // inner loop for shifing the zeroes towards right
        {
            int swap;
            if (a[j] == 0)
            {
                swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
            }
        }
    }

    printf ("New Array after shifting zeroes to the end : \n");
          
    for (j=0; j<n; j++)                                // Printing the new arrray 
    {
        printf ("%d ", a[j]);
    }

    return 0;
}