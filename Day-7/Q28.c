// Write a program to recursive reverse number

#include <stdio.h>

int rev (int);

int main ()
{
    int n, result;
    printf ("Enter the number = ");
    scanf ("%d", &n);
    
    result = rev (n);
    printf ("Reversed Number = %d", result);

    return 0;
}

int rev (int n)
{
    static int r = 0;

    if (n == 0)
    return r;

    else  {
       r = r*10 + (n%10);
       return rev (n / 10);
    }
}
