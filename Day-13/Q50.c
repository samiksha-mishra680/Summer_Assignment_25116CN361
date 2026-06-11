// WAP to find sum and average of array

#include <stdio.h>
int main ()
{
     int n, i, a[50], sum=0;
    printf ("Enter number of elements : ");
    scanf ("%d", &n);

    for (i=0; i<n; i++)
    {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i] );
    }

    for (i=0; i<n; i++)
    {
       sum = sum + a[i];
    }

float avg = (float)sum / n;

printf ("Sum of elements of array =  %d\n", sum);
printf ("Average = %.2f", avg);

return 0;
}
