// WAP to reverse a number

#include <stdio.h>
int main()  
{
    int i, n, d, rev=0;
    printf (" Enter n = ");
    scanf ( "%d", &n);

    while ( n > 0 )  {
        d = n % 10;
        rev = rev*10 + d;
        n = n / 10;
    }

    printf (" The reversed number is %d ", rev);
    return 0;

}