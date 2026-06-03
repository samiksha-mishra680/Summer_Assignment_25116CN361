// WAP to find largest prime factor

#include <stdio.h>
int main()  
{
    int n, i, j, f, count;
    printf(" Enter the number = ");
    scanf("%d", &n);

    printf(" The largest prime factor of %d is :  ", n);

    for (i=n; i>=1; i--)
    {
        f = n % i;
        count = 0;

        for (j=i; j>=1; j--)  {
            if (i % j == 0)
            count ++;
        }

        if (f == 0 && count == 2)    {
           printf("%d ", i);       
           break;
        }
    }
    
return 0;
}
