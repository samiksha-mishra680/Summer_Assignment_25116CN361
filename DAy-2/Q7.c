// WAP to find product of digits

#include <stdio.h>
int main()  
{
    int i, n, rem, product=1 ;
    printf("Enter n = ");
    scanf("%d", &n);

    if ( n == 0)
    printf (" Product = 0 ");

       while ( n > 0) {
        rem = n % 10;
        product = product * rem ;
        n = n / 10;
 }

 printf("The product of digits is %d ", product);
 return 0;
    
}
