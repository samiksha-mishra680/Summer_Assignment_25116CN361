// WAP to find first repeating character

#include <stdio.h>
int main()
{
    char str[100];
    int i, j;

    printf ("Enter the String : ");
    scanf ("%[^\n]", str);

    for (i=0; str[i] != '\0'; i++)
    {
        for (j=i+1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                printf ("First Repeating Character : %c", str[i]);
                return 0;
            }
        }
    }

    printf ("No repeating character found.");

    return 0;
}