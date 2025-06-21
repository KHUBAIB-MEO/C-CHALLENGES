// CREATE A PROGRAM THAT TAKE TWO NUMBERS AND SHOW THE RESULT OF ALL ARITHMETIC OPERATORS (+, -, *, /, %)

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter First number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("%d + %d  = %d\n", num1, num2, (num1 + num2));
    printf("%d - %d  = %d\n", num1, num2, (num1 - num2));
    printf("%d * %d  = %d\n", num1, num2, (num1 * num2));
    printf("%d / %d  = %d\n", num1, num2, (num1 / num2));
    printf("%d %% %d  = %d\n", num1, num2, (num1 % num2));

    return 0;
}