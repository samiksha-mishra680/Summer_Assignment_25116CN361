/* WAP to print character pyramid
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA    */

#include <stdio.h>
int main ()
{
    int i, j;
    char k;
    int n = 5;

    for (i=1; i<=n; i++)                           
    { 
        for (j=1; j<=n-i; j++)     {               // loop for printing space
            printf (" ");        
        }

        for (k='A'; k<= 'A'+(i-1); k++)                    // loop for increasing letters
        {
            printf ("%c", k);        
        }

        for (char l='A'+(i-2); l>='A'; l--)                // loop for decreasing letters
        {
        printf ("%c", l);  
        }

        printf ("\n");
    }
return 0;
}