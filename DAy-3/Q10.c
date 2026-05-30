// WAP to print prime numbers in a range

#include <stdio.h>
int main ()
{
    int i, j, u, l, prime ;
    printf (" Enter Upper limit = ");
    scanf ("%d", &u);
    printf (" Enter Lower limit = ");
    scanf ("%d", &l);

    for (i=l; i<=u; i++)  {
        prime = 1;                         // Assuming the number is prime

        if ( i<=1 )  
        prime = 0;

    for (j=2; j<i; j++)  {
        if( i % j == 0 ) {
        prime = 0;
        break;
    }
    }

    if ( prime == 1 )
    printf (" %d\n ", i);
}

return 0;

}