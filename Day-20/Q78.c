// WAP to check symmetric matrix

#include <stdio.h>
int main()
{
    int i, j, r, c;
    int a[50][50];

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

    int symmetric = 1;

    if (r != c)
    printf ("Can't check as Symmetric Matrices are a type of Square Matrices.");

    else
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            if (a[i][j] != a[j][i])
            {
               symmetric = 0;
               break;
            }
        }

        if (symmetric == 0)
        break; 
    }

    if (symmetric)
    printf ("This is a Symmetric matrix.");

    else
    printf ("This is not a Symmetric Matrix.");

    return 0;
}