// WAP to count the digits of a number

#include <stdio.h>
int main ()
{
    int i, n, count=0;
    printf("Enter n= ");
    scanf("%d", &n);

    while(n!=0)  {
        n = n/10;
        count++ ;
    }

    printf("The number of digits in the given number is %d", count);
    return 0;
}
