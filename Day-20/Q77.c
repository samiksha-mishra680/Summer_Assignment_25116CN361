// WAP to multiply matrices

#include <stdio.h>
int main()
{
    int i, j, r1, r2, c1, c2;
    int a[50][50], b[50][50], c[50][50];

    printf ("Enter number of rows and columns in first array : ");           
    scanf ("%d %d", &r1, &c1);
    for (i=0; i<r1; i++)                                                // Entering elements in first array
    {
        for (j=0; j<c1; j++)
        {
            printf ("a[%d][%d] = ",i, j);
            scanf ("%d", &a[i][j]);
        }
    }

    printf ("Enter number of rows and columns in second array : ");              
    scanf ("%d %d", &r2, &c2);
    for (i=0; i<r2; i++)                                               // Entering elements in second array
    {
        for (j=0; j<c2; j++)
        {
            printf ("b[%d][%d] = ", i, j);
            scanf ("%d", &b[i][j]);
        }
    }

    if (c1 != r2)
    printf ("Matrix Multiplication not possible.");

    else if (c1 == r2)
    {
        for (i=0; i<r1; i++)                                           // loop for rows of resultant matrix
        {
            c[i][j] = 0;
            int product=1;

            for (j=0; j<c2; j++)                                      // loop for columns of resultant matrix 
            {
                for (int k=0; k<c1; k++)                              // loop for actual multipication
                {
                    product = a[i][k] * b[k][j];
                    c[i][j] = c[i][j] + product;
                } 
            }
        }
    }

    printf ("Resultant Matrix : \n");

    for (i=0; i<r1; i++)                                              // printing the resultant matrix
    {
        for (j=0; j<c2; j++)
        {
            printf ("%d ", c[i][j]);
        }
        printf ("\n");
    }

    return 0;
}
