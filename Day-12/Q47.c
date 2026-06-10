// WAP to write function for fibonacci

#include <stdio.h>

void fibonacci (int);

int main ()
{
    int n;
    printf ("Enter number of terms : ");
    scanf ("%d", &n);

    printf ("Fibonacci Series : \n");
    fibonacci (n);
    
    return 0;
}

void fibonacci (int n)
{
    int i, a=0, b=1, c;

    for (i=1; i<=n; i++)     {

         if (i==1)
         printf ("%d ", a);

         else if (i==2)
         printf ("%d ", b);

         else 
        {
             c = a+b;
             printf ("%d ", c);
             a = b;
             b = c;
        }
    } 
}

