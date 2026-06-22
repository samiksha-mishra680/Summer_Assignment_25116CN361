// WAP to find maximum occurring character

#include <stdio.h>
int main()
{
    char str[100], max=0, max_char;
    int i, j, count;

    printf ("Enter the String : ");
    scanf ("%[^\n]", str);

    for (i=0; str[i] != '\0'; i++)
    {
        count = 1;

        for(j=i+1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j] && str[i] != ' ')
            {
                count++ ;
            }
        }

        if (count > max)
        {
            max = count;
            max_char = str[i];

        }
    }

     printf ("Maximum Occurring Character : %c", max_char);

    return 0;
}