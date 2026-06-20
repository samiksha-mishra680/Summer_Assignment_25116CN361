// WAP to remove spaces from string

#include <stdio.h>
int main()
{
    char str[50];
    int i, j=0;
    printf ("Enter the String : ");                       // input the string
    scanf ("%[^\n]", str); 

    for (i=0; str[i] != '\0'; i++)                        // outer loop to check the string
    {
        if (str[i] != ' ')
        {
            str[j]= str[i];                              // if no space comes, copy that index into str[j]
            j ++;
        }
    }

    str[j] ='\0';                                         // terminate str[j] with a null character
 
    printf ("String after removing spaces : \n");
    printf ("%s", str);

    return 0;
}