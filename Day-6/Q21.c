// WAP to convert decimal to binary

#include <stdio.h>
int main ()  
{
    int n, binary[32], i=0, j ;
    printf(" Enter the number in decimal form = ");
    scanf("%d", &n);

    if ( n == 0 )     {
      printf ("Binary = 0");
      return 0;
    }

    while (n > 0) 
    {
       binary[i] = n % 2;                     // to calculate remainders and storing them
       n = n / 2;                             // to get the quotient after dividing by 2 each time
       i ++;                                  // increasing the index of array
    }

        printf ("Binary number :  ");

        for (j = i-1; j>=0; j--)                    // to print the remainders in reverse order
        {
            printf ("%d ", binary[j] );
        }

return 0;
}