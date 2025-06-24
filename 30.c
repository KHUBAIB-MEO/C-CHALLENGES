// CREATE A PROGRAM TO CREATATE A SIMPLE CALCULATOR USING SWITCH CASE //
#include <stdio.h>
int main()
{
    int num1, num2, result;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Select operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice (1-5): ");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("Result: %d + %d = %d\n", num1, num2, result);
        break;

    case 2:
        result = num1 - num2;
        printf("Result: %d - %d = %d\n", num1, num2, result);
        break;

    case 3:
        result = num1 * num2;
        printf("Result: %d * %d = %d\n", num1, num2, result);
        break;
    case 4:
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result: %d / %d = %d\n", num1, num2, result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    case 5:
        if (num2 != 0)
        {
            result = num1 % num2;
            printf("Result: %d %% %d = %d\n", num1, num2, result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Invalid choice. Please select a valid operation (1-5).\n");
        break;
    }
    return 0;
}