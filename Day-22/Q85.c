// WAP to check palindrome string

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50];
    int i=0, j, l=0;

    printf ("Enter String 1 : ");
    scanf ("%[^\n]", str1);
  
    strcpy (str2, str1);                             // to copy str1 into str2
    l = strlen (str1);                               // to calculate length of string

    for (i=0, j=l-1; i<j; i++, j--)                  // logic to reverse the str1
    {
        int temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
    }

    int flag = 1;

    for (i=0; i<l; i++)
    {    
        if (str1[i] != str2[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    printf ("Palindrome String.");

    else
    printf ("Not Palindrome.");

    return 0;
}




    