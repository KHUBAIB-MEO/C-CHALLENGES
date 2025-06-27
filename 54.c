// CREATE A FUNCTION TAKE 2 FLOAT ARGUNMENT AND RETURN THE LARGER VALUE //

#include <stdio.h>

float getLarger(float a, float b);

int main()
{
    float num1, num2, larger;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    larger = getLarger(num1, num2);

    printf("The larger value is: %.2f\n", larger);

    return 0;
}

float getLarger(float a, float b)
{
    return (a > b) ? a : b;
}
