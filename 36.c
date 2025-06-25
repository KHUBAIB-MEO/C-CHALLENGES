// CREATE A PROGRAM TO FIND THE GREATEST COMMON DIVISOR OF TWO NUMBERS //
#include <stdio.h>
int main()
{
    int num1, num2, gcd;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int min = (num1 > num2) ? num2 : num1;

    for (int i = min; i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
            break;
        }
    }
    printf("The GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}
