// WAP to write function to find maximum

#include <stdio.h>

int max (int, int);

int main ()
{
    int a, b, result;
    printf ("Enter two numbers : ");
    scanf ("%d %d", &a, &b);

    result = max(a, b);
    printf (" Maximum = %d", result );
    return 0;
}

int max (int x, int y)
{
    if ( x > y)
    return x;

    else
    return y;
}