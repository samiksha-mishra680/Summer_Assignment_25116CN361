// WAP to check anagram strings

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], temp;
    int i, j;

    printf ("Enter first String : ");
    scanf ("%s", str1);

    printf ("Enter second String : ");
    scanf ("%s", str2);

    if (strlen (str1) != strlen (str2))                      // if unequal lemgths of both strings the not anagram
    {
        printf ("Not Anagram");
        return 0;
    }

    for (i=0; str1[i] != '\0'; i++)                         // Sorting first string
    {
        for (j=i+1; str1[j] != '\0'; j++)
        {
            if (str1[i] > str1[j])
            {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }

        for (i=0; str2[i] != '\0'; i++)                       // Sorting second string
        {
            for (j=i+1; str2[j] != '\0'; j++)
            {
                if (str2[i] > str2[j])
                {
                    temp = str2[i];
                    str2[i] = str2[j];
                    str2[j] = temp;
                }
            }
        }

        if (strcmp (str1, str2) == 0)                          // Comparing both 
        printf ("Anagram");

        else
        printf ("Not Anagram");

        return 0;
    }