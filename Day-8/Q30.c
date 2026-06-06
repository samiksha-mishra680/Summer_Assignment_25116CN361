/* WAP to print number triangle
1
12
123
1234
12345  */

#include <stdio.h>
int main()  
{
    int i, j, r;
    printf ("Enter Rows = ");
    scanf ("%d", &r);

    for (i=1; i<=r; i++)
    {
         for (j=1; j<=i; j++)       {
            printf("%d", j);           
         }

    printf ("\n");
}
    
return 0;
}