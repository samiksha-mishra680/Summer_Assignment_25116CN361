/* WAP to print repeated-number pattern
1
22
333
4444
55555    */

#include <stdio.h>
int main()  
{
    int i, j, r;
    printf ("Enter Rows = ");
    scanf ("%d", &r);

    for (i=1; i<=r; i++)
    {
         for (j=1; j<=i; j++)       {
            printf("%d", i);           
         }

    printf ("\n");
}
    
return 0;
}