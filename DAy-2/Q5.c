// WAP to find sum of digits of a number

#include <stdio.h>
int main()  
{
    int i, n, rem, sum=0;
    printf ("Enter n= ");
    scanf ("%d", &n);

       while ( n > 0)  {
        rem = n % 10;
        sum += rem;
        n = n/10;
    }

    printf("The sum of digits is %d", sum);
    return 0;

}