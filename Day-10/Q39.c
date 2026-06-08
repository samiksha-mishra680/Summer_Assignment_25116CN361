/*  WAP to print number pyramid
        1
       121
      12321
     1234321
    123454321     */

#include <stdio.h>
int main ()
{
    int i, j, k;
    int n = 5;

    for (i=1; i<=n; i++)                           
    { 
        for (j=1; j<=n-i; j++)     {               // loop for printing space
            printf (" ");        
        }

        for (k=1; k<=i; k++)                  // loop for increasing numbers
        {
            printf ("%d", k);        
        }

        for (int l=i-1; l>=1; l--)                // loop for decreasing numbers
        {
        printf ("%d", l);  
        }

        printf ("\n");
    }
return 0;
}