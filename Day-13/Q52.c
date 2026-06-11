// WAP to count even and odd elements

#include <stdio.h>
int main ()
{
     int n, i, a[50], even=0, odd=0;
    printf ("Enter number of elements : ");
    scanf ("%d", &n);

    for (i=0; i<n; i++)
    {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i] );
    }

    for (i=0; i<n; i++)
    {
        if (a[i] % 2 == 0)
        even++ ;

        else
        odd++ ;
    }

    printf ("Number of even elements = %d\n", even);
    printf ("Number of odd elements = %d", odd);

    return 0;
}