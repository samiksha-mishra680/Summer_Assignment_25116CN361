// WAP to convert binary to decimal

#include <stdio.h>
int main() 
{
    int n, i=0, r, sum=0;
    int Valid_Binary = 1;                             // 1 means true and 0 means false

    printf(" Enter the number in binary form = ");
    scanf("%d", &n);

    if (n == 0)  {
        printf (" Decimal = 0 ");
        return 0;
    }

    while (n != 0)
    {      
        r = n % 10;                                   // calculating last digit one by one

        if (r != 0 && r != 1)     {
           Valid_Binary = 0;                          // setting the variable to 0 means false
           break;
        }

        sum = sum + (r << i);                    // calculating decimal 
        n = n / 10;                                    // updating the number by removing last digit
        i ++;                                          // increasing the power of 2
    }

    if ( Valid_Binary == 0 )
    printf (" Invalid Binary Number ");
     
    else if ( Valid_Binary == 1 )
    printf (" Decimal number = %d ", sum);

return 0;
}