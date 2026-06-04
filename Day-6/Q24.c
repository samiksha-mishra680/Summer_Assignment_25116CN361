// WAP to find x(n) without pow()


#include <stdio.h>
int main()
{
    int x, n, i;
    long long result=1;

    printf ("Enter Base and Power : ");
    scanf ("%d %d", &x, &n);

    if (n == 0)
    printf("The result is 1");
    
    else {
    for ( i=1; i<=n; i++)
    {
        result = result * x;
    }
    }  

    printf ("The result is %lld", result);

    return 0;
}