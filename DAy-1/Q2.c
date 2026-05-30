// WAP to print multiplication table of a number 

#include <stdio.h>
int main() 
{
    int i, n, product;
    printf("Enter n= ");
    scanf("%d", &n);

    for(i=1; i<=10; i++)
    {
        product = n*i;
        printf("%d\n", product);
    }

    return 0;
}