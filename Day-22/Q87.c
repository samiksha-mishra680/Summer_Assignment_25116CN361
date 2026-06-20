// WAP to character frequency

#include <stdio.h>
int main()
{
    char str[100];
    int i, j, count;
    
    printf ("Enter the String : ");
    scanf ("%[^\n]", str);

    for (i=0; str[i] != '\0'; i++)
    {
        count =1;

        if (str[i] == '*')
        continue; 

        for (j=i+1; str[j] != '\0'; j++)                     // loop for checking the duplicates
        {
            if (str[i] == str[j])
            {
                count ++;
                str [j] = '*';                               // entering star at duplicate value so that we do not count it again on reaching its index
            }
        }
    

        printf ("%c = %d\n", str[i], count);
    }

    return 0;
}