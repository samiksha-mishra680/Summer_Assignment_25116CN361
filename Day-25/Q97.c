// WAP to merge two sorted arrays.

#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i=0, j=0;

    printf ("Enter first String : ");
    scanf ("%s", str1);
    printf ("Enter second String : ");
    scanf ("%s", str2);

    while (str1[i] != '\0')
    i++ ;

    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf ("Merged String : \n");
    printf ("%s", str1);

    return 0;
}