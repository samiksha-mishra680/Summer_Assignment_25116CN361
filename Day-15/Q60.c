// WAP to find duplicates in an array

#include <stdio.h>
int main()
{
    int n, i, a[50];
    printf ("Enter number of elements : ");
    scanf ("%d", &n);

    for (i=0; i<n; i++)
    {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i]);
    }

    printf ("Duplicate elements are : \n");

    for (i=0; i<n; i++)                               
    { 
        int is_duplicate = 0;
        for (int j=0; j<i; j++)                       // checking if duplicate is already printed
        {
            if (a[i] == a[j]) {
                is_duplicate = 1;
                break;
            }
        }

        if (is_duplicate)
        continue;

        for (int k=i+1; k<n; k++)                      // checking for duplicates ahead
        {
            if (a[i] == a[k])        {
                printf ("%d ", a[i]);
                break;
            }
        }
    }
        return 0;
}
