// WAP to create voting eligibilty system.

#include <stdio.h>
int main()
{
    int age;
    printf ("Enter the age : ");
    scanf ("%d", &age);

    if (age < 0)
    printf ("Not Valid Age.");

    else if (age >= 18)
    printf ("Eligible for Voting.");

    else if (age < 18)
    printf ("Not eligible for Voting.");

    return 0;
}