// Wap to print factors of a number

#include <stdio.h>
int main() 
{
    int n, i, j, f, count;
    printf(" Enter the number = ");
    scanf("%d", &n);

    printf(" The prime factors of %d are :\n", n);

    for (i=1; i<=n; i++)  
    { 
        count = 0;
        f = n % i;            
        
        for (j=1; j<=i; j++)   {
            if (i % j == 0)
            count ++;            
        }
        
       if (f == 0 && count == 2)                          // comdition to check the factor and it is prime or not
        printf("%d ", i);      
        
    }
            
    return 0;

}
