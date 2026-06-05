// Write a program to recursive factorial

#include <stdio.h>

int fact (int n);

int main ()
{
    int n, factorial;
    printf ("Enter the number = ");
    scanf ("%d", &n);

    factorial = fact (n);                                                  // function calling
    printf ("Factorial of %d is %d", n, factorial);
    return 0;
}

int fact (int n)
{
    if (n == 0)
    return 1;

    else
    return n * fact(n-1);
}






