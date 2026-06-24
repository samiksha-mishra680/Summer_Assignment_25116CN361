// WAP to find common characters in strings.

#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i, j, count;

    printf ("Enter first string : ");
    scanf ("%s", str1);
    printf ("Enter second String : ");
    scanf ("%s", str2);

    for (i=0; str1[i] != '\0'; i++)
    {
        count = 1;

        for (j=0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                count++ ;
                str2[j] = '*';
            }
        }

        if (count > 1)
        printf ("%c\n", str1[i]);
            
    }

    return 0;
}