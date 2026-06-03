// WAP to check Perfect number

#include <stdio.h>
int main()  
{
    int n, i, sum=0;
    printf(" Enter the number = ");
    scanf("%d",&n);

    for (i=1; i<n; i++)
    {
        if ( n%i == 0 )              // calculating the perfect divisors
        sum = sum + i;               // sum of divisors
    }

    if ( sum == n )                                          // if sum of divisors is equal to the number, it is perfect number
    printf (" %d is a Perfect number ", n);

    else
    printf (" %d is not a Perfect number ", n);

    return 0;
}