// WAP to count words in a sentence

#include <stdio.h>
int main()
{
    char str [100];
    int i=0, count = 1;
    printf ("Enter a Sentence : ");
    scanf ("%[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')                     // since words are 1 more than the number of spaces (so initialising count to 1)
        {
           count ++ ;
        }
        i ++ ;
    }

    printf ("Number of words = %d", count);

    return 0;
}