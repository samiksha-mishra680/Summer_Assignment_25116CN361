// WAP to find maximum frequency element

#include <stdio.h>
int main()
{
    int i, n, a[50];
    int frequency = 0;
    int element;

    printf ("Enter number of elements : ");
    scanf ("%d", &n);

    for (i=0; i<n; i++)                            // loop for array input
    {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i]);
    }

    for (i=0; i<n; i++)                            // outer loop for fixing an element
    {
        int count = 0;

        for (int j=0; j<n; j++)                  // inner loop for comparing with other elements to find its frequency 
        {
            if (a[i] == a[j])
            count ++;
        }

        if (count > frequency)
        {
            frequency = count;
            element = a[i];
        }
    }   

    printf ("Maximum frequency element = %d\n", element);
    printf ("Maximum frequency = %d", frequency);

    return 0;

}