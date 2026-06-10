// WAP to write function for palindome

#include <stdio.h>

int palindrome (int);

int main ()
{
    int n, result;
    printf ("Enter number : ");
    scanf ("%d", &n);

    result = palindrome (n);

    if (result == 1) 
    printf ("The number is palindrome");
    else
    printf ("The number is not palindrome");

    
}

int palindrome (int x)
{
    int r, rev=0, temp;
    temp = x;

    if (x == 0)
    return 1;

    while (temp != 0)  {
        r = temp % 10;
        rev = rev*10 + r;
        temp = temp/10;
    }
     if (rev == x)
     return 1;

     else 
     return 0;
}
