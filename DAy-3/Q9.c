// WAP to check whether a number is prime

#include <stdio.h>
int main () 
{
    int i, n, count=0;
    printf (" Enter n = ");
    scanf ("%d", &n);

    for (i=1; i<=n; i++)  {
       if ( n % i == 0 )
        count++ ;
    }

    if ( count == 2)
    printf (" The entered number is prime ");

    else
    printf (" The entered number is not prime ");

    return 0;

}