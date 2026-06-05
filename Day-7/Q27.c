// Write a program to recursive sum of digits

#include <stdio.h>

int sum (int);

int main()
{
    int  n, result;
    printf ("Enter the number : ");
    scanf ("%d", &n);

    result = sum(n);
    printf ("Sum of digits of %d is %d", n, result);
    return 0;
}

int sum (int n)
{
    if (n == 0)
    return 0;

    else
    return (n % 10) + sum (n / 10);
}