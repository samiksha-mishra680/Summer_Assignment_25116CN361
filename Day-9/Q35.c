/*WAP to print repeated character pattern
A 
BB
CCC
DDDD
EEEEE     */

#include <stdio.h>
int main () 
{
    int i, j, r;
    printf ("Enter Rows = ");
    scanf ("%d", &r);

    for (i=1; i<=r; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf ("%c", 65 + (i-1));
        }
        printf ("\n");
    }

    return 0;
}
