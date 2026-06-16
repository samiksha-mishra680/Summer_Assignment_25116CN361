// WAP to Binary Search

#include <stdio.h>
int main()
{
    int i, n, a[50], key;
    printf ("Enter number of elements : ");
    scanf ("%d", &n);

    printf ("Enter Sorted Array : \n");

    for (i=0; i<n; i++)
    {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i]);
    }

    printf ("Enter element to be searched : ");
    scanf ("%d", &key);

    int beg=0, end = n-1;

    while (beg <= end)
    {
        int mid = (beg + end)/2;

        if (a[mid] == key) {
            printf ("Element found at %d index", mid);
            return 0;
        }

        else if (key < a[mid])
        end = mid - 1;

        else if (key > a[mid])
        beg = mid + 1;
    }

    printf ("Element not found");

    return 0;
}
    
