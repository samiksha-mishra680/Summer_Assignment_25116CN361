// WAP to write function to find sum of two numbers

#include <stdio.h>

int sum (int, int);

int main ()
{
    int a, b, result;
    printf ("Enter two numbers : ");
    scanf ("%d %d", &a, &b);

    result = sum (a, b);
    printf ("The sum of %d and %d is %d", a, b, result);

    return 0;
}

int sum (int x, int y)
{
    return x + y;
}