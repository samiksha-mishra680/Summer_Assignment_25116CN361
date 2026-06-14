// WAP to remove duplicates from array

#include <stdio.h>
int main()
{
    int i, n, a[50], sum;
    printf ("Enter number of elements : ");
    scanf ("%d", &n);

    for (i=0; i<n; i++)
    {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i]);
    }

    printf ("Removing duplicates : ");

    for (i=0; i<n; i++)
    {
        int duplicate = 0;

        for (int j=0; j<i; j++)
        {
            if (a[i] == a[j])
            {
                duplicate = 1;
                break;
            }
        }
    
        if (duplicate == 0)
        printf ("%d ", a[i]);
    }

    return 0;
}