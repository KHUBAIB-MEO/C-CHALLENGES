// CREATE A SIMPLR PROGRAM TO CALCULATE COMPUND INTEREST //

#include <stdio.h>
int main()
{
    float principal, rate, time, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    compoundInterest = principal * (1 + rate / 100) * time;

    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}