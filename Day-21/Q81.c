// WAP to find string length without strlen()

#include <stdio.h>
int main()
{
    char str[50];
    int i;
    printf ("Enter String : ");
    scanf ("%[^\n]", str);

    i = 0;

    while (str[i] != '\0')
    {
        i++ ;
    }

    printf ("Length of string = %d ", i);

    return 0;
}