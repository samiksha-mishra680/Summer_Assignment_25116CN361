/* WAP to print character triangle
A
AB
ABC
ABCD
ABCDE          */

#include <stdio.h>
int main()  
{
    int i, r;
    char j;
    printf ("Enter Rows = ");
    scanf ("%d", &r);

    for (i=1; i<=r; i++)
    {
        for (j=65; j < 65+i; j++) {
            printf("%c", j);         
        }
     printf ("\n");
    }
    
return 0;
}
