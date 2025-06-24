// CREATE A PROGRAM TO FIND THE MINIMUM OF TWO NUMBER USING TERNARY OPERATOR //

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter 1 number: ");
    scanf("%d", &num1);
    printf("Enter 2 number: ");
    scanf("%d", &num2);

    (num1 > num2) ? printf("%d is minimium\n", num2) : printf("%d is minimium\n", num1);

    return 0;
}