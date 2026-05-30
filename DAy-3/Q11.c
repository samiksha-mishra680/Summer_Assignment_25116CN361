// WAP to find GCD of two numbers

#include <stdio.h>
int main() 
{
    int n1, n2, i, j, GCD=1;
    printf (" Enter two numbers n1 and n2 = ");
    scanf("%d %d", &n1, &n2);

    for (i=1; i<=n1; i++)  
    {
        for (j=1; j<=n2; j++)
        {
            n1 % i;
            n2 % j;

            if (n1%i == 0 && n2%j == 0 && i==j)
            GCD = i;

        }
    }

    printf(" The GCD of %d and %d is %d",n1, n2, GCD);
    return 0;

}