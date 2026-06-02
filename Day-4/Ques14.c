// WAP to find nth fibonacci term

#include <stdio.h>
int main ()
{
    long long n, i, a=0, b=1, c;
    printf(" Enter term = ");
    scanf("%lld", &n);

        if (n == 1)
        printf("%lld", a);

        else if (n == 2)
        printf("%lld", b);

        else
        {
            for (i=3; i<=n; i++)
            {
                
                c = a + b;
                a = b;
                b = c;
            }
        printf ("%lld", c);
        }
            
     return 0;
    }
