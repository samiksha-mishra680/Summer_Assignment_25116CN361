// WAP to print Armstrong numbers in a range

#include <stdio.h>
#include <math.h>

int main() 
{
    int u, l, temp, i, count=0, r, c, sum=0;
    printf(" Enter lower range = ");
    scanf("%d", &l);
    printf(" Enter upper range = ");
    scanf("%d", &u);

    printf (" Armstrong numbers are:\n ");

    for (i=l; i<=u; i++)
    {
        count = 0;
        sum = 0;
        temp = i;

        while ( temp != 0 )  {
            count ++;
            temp = temp/10;
        }

        temp = i;
        while ( temp != 0)  {
            r = temp % 10;
            c = round(pow(r,count));
            sum += c;
            temp = temp/10;
        }

        if ( sum == i )
        printf ("%d ", i);
    }

    return 0;
}