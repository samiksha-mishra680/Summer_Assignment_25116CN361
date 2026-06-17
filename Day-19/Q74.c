// WAP to subtract matrices 

#include <stdio.h>
int main()
{
    int i, j, r1, r2, c1,c2;
    int a[50][50], b[50][50], c[50][50], sum=0;

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

    if (r1==r2 && c1==c2)
    {
        for (i=0; i<r1; i++)
        {
            for (j=0; j<c1; j++)
            {
                c[i][j] = a[i][j] - b[i][j];                             // subtraction in third array
            }
        }

        printf ("Subtraction of matrices :\n");

        for (i=0; i<r1; i++)
        {
            for (j=0; j<c1; j++)
            {
                 printf ("%d ", c[i][j]);                                    // printing the third array
            }
            printf ("\n");
        }
    }

    else
    printf ("Subtraction not possible.");

    return 0;
}

    