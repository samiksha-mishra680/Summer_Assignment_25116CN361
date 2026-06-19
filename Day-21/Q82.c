// WAP to reverse a string

#include <stdio.h>
int main()
{
    char str [50];
    int i, j, l=0;
    printf ("Enter String : ");
    scanf ("%[^\n]", str);

    for (i=0; str[i] != '\0'; i++)
    {
        l++ ;
    }

    for (i=0, j=l-1; i<j; i++, j--)
    {
            char temp = str[i];
            str [i] = str [j];
            str[j] = temp;
        
    }

    printf ("Reversed String : \n");
    printf ("%s", str);

    return 0;
}

