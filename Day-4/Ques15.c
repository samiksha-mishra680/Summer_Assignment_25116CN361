// WAP to check Armstrong number

#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp, r, i, count=0, c, sum=0;
    
    printf("Enter the number = ");
    scanf("%d", &n);
    temp = n;

    while (temp != 0)   {
        count++ ;                       // to calculate total number of digits
        temp = temp / 10;                      
    }

    temp = n;
      
    for (i=1; i<=count; i++)   {
        r = temp % 10;
        c = round (pow (r, count));
        sum = sum + c;                  // to calculate sum of the digits of the number raised to the power total number of digits present in number
        temp = temp / 10;
    }

    if ( sum == n )
    printf (" Armstrong Number ");

     else
     printf(" Not Armstrong ");

return 0;
       
 }



