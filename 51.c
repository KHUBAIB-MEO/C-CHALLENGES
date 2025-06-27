// WRITE A FUNCTION "ADDS" THAT TAKE 4 INT PARAMETERS AND RETURN THE SUM //

#include <stdio.h>

int adds(int, int, int, int);

int main()
{
    int num1, num2, num3, num4;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    printf("Enter fourth number: ");
    scanf("%d", &num4);
    int result = adds(num1, num2, num3, num4);
    printf("The sum of %d + %d + %d + %d = %d", num1, num2, num3, num4, result);
    return 0;
}

int adds(int num1, int num2, int num3, int num4)
{
    int sum = num1 + num2 + num3 + num4;

    return sum;
}