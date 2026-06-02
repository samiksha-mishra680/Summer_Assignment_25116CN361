// WAP to generate Fibonacci series

#include <stdio.h>
int main()  
{
    long long n, i, a, b, c;
    a = 0;
    b = 1;
    
    printf(" Enter number of terms = ");
    scanf("%lld", &n);

    printf("%lld %lld ", a, b);

    for (i=3; i<=n; i++)
     {        
        c = a + b;                    
        printf("%d ", c);
        a = b;
        b = c;
  }

    return 0;

}
