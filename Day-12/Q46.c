// WAP to write function for Armstrong

#include <stdio.h>
#include <math.h>

int arm (int);

int main()
{
    int n;
    printf ("Enter the number : ");
    scanf ("%d", &n);

    int result = arm(n);

    if (result == 1)
    printf ("The number %d is Armstrong", n);

    else 
    printf ("The number %d is not Armstrong", n);
}

int arm(int x)
{
    int i, r, temp, count=0, sum=0;
    temp = x;

    if (x == 0)
    return 1;

    while (temp != 0)     {
        count ++;
        temp = temp/10;
    }
    temp = x;

    while (temp != 0)   {
         r = temp % 10;
         sum = sum + round(pow(r,count));
         temp = temp/10;
    }
    if (sum == x)
    return 1;

    else
    return 0;
}
