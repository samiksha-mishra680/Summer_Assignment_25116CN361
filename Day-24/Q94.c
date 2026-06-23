// WAP to compress a string

#include <stdio.h>
int main()
{
    char str[100];
    int i, j, count;

    printf ("Enter the String : ");
    scanf ("%s", str);

    for (i=0; str[i] != '\0'; i++)
    {
        count = 1;
        
        while (str[i] == str[i+1])
        {
            count ++;
            i++;
        }

        printf ("%c%d", str[i], count);
    }

    return 0;
}