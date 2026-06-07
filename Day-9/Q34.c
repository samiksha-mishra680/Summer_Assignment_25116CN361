/*WAP to print revrse number triangle
12345
1234
123
12
1      */

#include <stdio.h>
int main () 
{
    int i, j, r;
    printf ("Enter Rows = ");
    scanf ("%d", &r);

    for (i=r; i>=1; i-- )                                // outer loop for rows
    {
        for (j=1; j<=i; j++)                             // inner loop for columns i.e. numbers to be printed in the rows
        {
            printf ("%d", j);           
        }
        printf ("\n");
    }

 return 0;
}