// WAP to check string rotation

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], temp[200];
    int i, j, k, found=0;

    printf ("Enter first String : ");
    scanf ("%s", str1);

    printf ("Enter Second String : ");
    scanf ("%s", str2);

    if (strlen (str1) != strlen (str2))
    {
        printf ("No String Rotation.");
        return 0;
    }

    strcpy (temp, str1);                                  // copying str1 into temp
    strcat (temp, str1);                                  //add str1 in temp
    
    for (i=0; temp[i] != '\0'; i++)
    {
        k = i;

        for (j=0; str2[j] != '\0'; j++)
        {
            if (temp[k] != str2[j])
            break;

            k++;
        }

        if (str2[j] == '\0') 
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    printf ("The String is Rotated.");

    else
    printf ("No String Rotation.");

    return 0;

}
