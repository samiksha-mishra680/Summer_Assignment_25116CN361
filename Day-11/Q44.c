// WAP to write function to find factorial

#include <stdio.h>

long long fact (int);

int main ()
{
    int n;
    long long result;
    printf ("Enter the number = ");
    scanf ("%d", &n);

    result = fact (n);
    printf ("Factorial of %d is %lld", n, result);
    return 0;
}

long long fact (int x)
{
    int i;
    long long f=1;
    
    for (i=1; i<=x; i++)
    {
        f = f * i;
    }
     return f;
}