// CREATE A PROGRAM TO DECLARE TWO INTEGER VARIABLE ASSIGN THEM VALUE AND DISPLAY THEIR VALUE //

#include <stdio.h>
int main()
{
    int num1;
    int num2;
    printf("Enter value of number 1: ");
    scanf("%d", &num1);
    printf("\nEnter value of number 2: ");
    scanf("%d", &num2);

    printf("\nThe value of number 1 is: %d\n", num1);
    printf("\nThe value of number 2 is: %d\n", num2);
    return 0;
}