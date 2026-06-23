// WAP to find longest word

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], word[20], longest[20];
    int i, j=0;

    printf ("Enter the Sentence : ");
    scanf ("%[^\n]", str);

    longest[0] = '\0';                                           // initialising longest to a null character

    for (i=0; ; i++)

    {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            word[j++] = str[i];                                   // storing the current word in word[]
        }

        else
        {
            word[j] = '\0';

            if (strlen(word) > strlen(longest))
            strcpy (longest, word);                               // copying the word in longest string

            j = 0;                                                // initialising j again to zero

            if (str[i] == '\0')                                   // when the string terminates , break the loop
            break;
        }
    }

    printf ("Longest word = %s", longest);                       // printing the longest word

    return 0;
}