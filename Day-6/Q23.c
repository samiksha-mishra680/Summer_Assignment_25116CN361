// WAP to count set bits in a number

#include <stdio.h>
int main()
{
    int n, count = 0;
    printf (" Enter the number : ");
    scanf ("%d", &n);

    while ( n > 0 )
    {
       count += (n & 1) ;                     // checks if last bit is 1, if it is 1 count is increased by 1
        n = n >> 1;                           // removes last bit
    }

    printf (" Number of set bits = %d ", count);

return 0;

}