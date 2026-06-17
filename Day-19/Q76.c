// WAP to find diagonal sum

#include <stdio.h>
int main()
{
    int i, j, r, c;
    int a[50][50], sum=0;

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

    if (r != c)                                                        // checking the condition for which matrix the diagonal sum is possible
    {
        printf ("Diagonal sum is possible only for a square matrix.");
        return 0;
    }

    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            if (i==j)                                                  // calculating the sum
            {
                 sum = sum + a[i][j];
            }
        }
    }

    printf ("Sum of diagonal elements is : %d ", sum);                 // printing the sum

    return 0;
}

    

