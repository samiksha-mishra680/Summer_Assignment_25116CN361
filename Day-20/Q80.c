// WAP to find column-wise sum

#include <stdio.h>
int main()
{
    int i, j, r, c;
    int a[50][50];

    printf ("Enter number of rows and columns in the array : ");           

    scanf ("%d %d", &r, &c);
    for (i=0; i<r; i++)                                                // Entering elements in the array
    {
        for (j=0; j<c; j++)
        {
            printf ("a[%d][%d] = ",i, j);
            scanf ("%d", &a[i][j]);
        }
    }

    for (j=0; j<c; j++)                                              // outer loop for fixing column
    {
        int sum = 0;

        for (i=0; i<r; i++)                                         // inner loop for calculating the sum by changing rows
        {
            sum = sum + a[i][j];
        }

        printf ("Sum of %d column = %d\n",j, sum);
    }

    return 0;
}




