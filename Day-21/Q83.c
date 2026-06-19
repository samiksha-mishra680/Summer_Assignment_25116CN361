// WAP to count vowels and consonants

#include <stdio.h>
int main()
{
    int i, vowel=0, consonant=0;
    char str[50];
    printf ("Enter String : ");
    scanf ("%[^\n]", str);

    for (i=0; str[i] != '\0'; i++)
    {
         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
             str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
         vowel ++;

         else
         consonant ++;
    }

    printf ("Number of vowels = %d\n", vowel);
    printf ("Number of consonants = %d", consonant);

    return 0;
}