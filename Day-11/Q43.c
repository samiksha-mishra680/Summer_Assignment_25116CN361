// WAP to write function to check prime

#include <stdio.h>

int prime (int);

int main()
{
    int n, result;
    printf ("Enter the number : ");
    scanf ("%d", &n);

    result = prime (n);

    if (result == 1)
    printf ("The number is prime");

    else
    printf ("The number is not prime");

    return 0;
}

int prime (int x)
{
    int i, count =0 ;

    if (x <= 1)
    return 0;

    for (i=1; i<=x; i++)
    {
        if (x % i == 0)
        count ++;
    }

    if ( count == 2 )
    return 1;

    else 
    return 0; 
}