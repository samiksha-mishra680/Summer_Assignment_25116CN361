// WAP to find missing number in array

#include <stdio.h>
int main()
{
    int n, i, a[50];
    printf ("Enter number of elements : ");
    scanf ("%d", &n);

    for (i=0; i<n-1; i++)                          // array input with a missing element (should be from 1 to n)
    {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i]);
    }
    
    int total_sum = (n * (n+1)) / 2;                // total sum of numbers from 1 to n

    int sum = 0;
    for (i=0; i<n-1; i++)
    {
        sum = sum + a[i];                              // sum of elements of arrray
    }

    int missing_number = total_sum - sum ;             // calculating the missing number 

    printf ("Missing Numner = %d", missing_number);

    return 0;
}