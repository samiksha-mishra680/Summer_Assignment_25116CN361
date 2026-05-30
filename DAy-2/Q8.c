// WAP to check whether  a number is palindrome

#include <stdio.h>
int main()  
{
    int i, n, d, temp, rev=0;
    printf (" Enter n = ");
    scanf ( "%d", &n);

    temp = n;

    while ( temp > 0 )  {
        d = temp % 10;
        rev = rev*10 + d;
        temp = temp / 10;
    }

    if ( n == rev )
    printf ( "The given number %d is palindrome", n );

    else 
    printf( " Not Palindrome ");

    return 0;
}
