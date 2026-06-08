/* WAP to print star pyramid
    *
   ***
  *****
 *******
*********        */

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

        for (k=1; k<= 2*i-1; k++)                  // loop for printing star
        {
            printf ("*");        
        }
        printf ("\n");  
    }
return 0;
}