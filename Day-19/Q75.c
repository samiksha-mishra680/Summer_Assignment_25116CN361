// WAP to transpose matrices 

#include <stdio.h>
int main()
{
    int i, j, r, c;
    int a[50][50], b[50][50];

    printf ("Enter number of rows and columns in the array : ");           
    scanf ("%d %d", &r, &c);
    for (i=0; i<r; i++)                                                // Entering elements in array
    {
        for (j=0; j<c; j++)
        {
            printf ("a[%d][%d] = ",i, j);
            scanf ("%d", &a[i][j]);
        }
    }

    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
             b[j][i] = a[i][j];                              // transpose in second array
        }
     }

     printf ("Transpose of Matrices : \n");

     for (i=0; i<c; i++)
     {
        for (j=0; j<r; j++)
        {
            printf ("%d ", b[i][j]);                         // Printing the transpose 
        }
        printf ("\n");
     }

     return 0;
}