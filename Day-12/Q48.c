// WAP to write function for Perfect number

#include <stdio.h>

int perfect (int);

int main()
{
    int n;
    printf ("Enter the number : ");
    scanf ("%d", &n);

    int result = perfect(n);

    if (result == 1)
    printf ("%d is a Perfect number", n);
    else
    printf ("%d is not Perfect number", n);

    return 0;
}

int perfect (int n)
{
    int i, sum=0;

    if (n == 1)
    return 0;

    for (i=1; i<n; i++)
    {
        if (n % i == 0)
        sum = sum + i;
    }

        if (sum == n)
        return 1;

        else
        return 0;
    
}