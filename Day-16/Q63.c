// WAP to find pair with given sum

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

    printf ("Enter sum = ");
    scanf ("%d", &sum);

    printf ("Pairs with sum %d :\n", sum);

    for (i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i] + a[j] == sum)
            printf ("%d, %d\n", a[i], a[j]);
        }
    }

    return 0;
}