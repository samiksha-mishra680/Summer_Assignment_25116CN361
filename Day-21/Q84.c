// WAP to convert lowercase and uppercase

#include <stdio.h>
int main()
{
    char str[50];
    int i;
    printf ("Enter String : ");
    scanf ("%[^\n]", str);

    for (i=0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)                        // since the difference between ascii values of 'a' and 'A' is 32.
        {
            str [i] = str[i] - 32;
        }

        else if (str[i] >= 65 && str[i] <= 90)
        {
            str [i] = str[i] + 32;
        }
    }

    printf ("New String : \n");
    printf ("%s", str);

    return 0;
}