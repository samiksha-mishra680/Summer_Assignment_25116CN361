// WAP to check Strong number

# include <stdio.h>
int main()
{
    int n, j, temp, r, fact, sum=0;
    printf(" Enter the number = ");
    scanf("%d", &n);
 
    temp = n;                            

       while (temp != 0)  {
        fact = 1;
       r = temp % 10;                                    // gives last digit of number
        for (j=r; j>=1; j--)  {                          // calculating the factorial of every digit
            fact = fact * j;                              
        }

        sum = sum + fact;
        temp = temp / 10;                                 // removes last digit of number

    }

    if (sum == n)
    printf ("%d is a Strong number", n);

    else 
    printf("%d is not a strong number", n);


    return 0;
}




