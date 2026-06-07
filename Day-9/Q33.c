/*WAP to print reverse star pattern
*****
****
***
**
*    */

#include <stdio.h>
int main () 
{
    int i, j, r;
    printf ("Enter Rows = ");
    scanf ("%d", &r);

    for (i=r; i>=1; i-- )
    {
        for (j=1; j<=i; j++)
        {
            printf ("*");           
        }
        printf ("\n");
    }

 return 0;
}