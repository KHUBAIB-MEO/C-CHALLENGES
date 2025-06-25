// WRITE A FUNCTION THAT CALCULATE A FACTORIAL OF A GIVEN NNUMBER //
#include <stdio.h>

// FUNCTION DECLARATION //
long factorial(int);

int main()
{
    int num;
    long result;
    printf("Enter a number for factorial: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Number should not be negative\n");
    }
    else
    {
        result = factorial(num);
        printf("The factorial of a given number %d is %ld", num, result);
    }

    return 0;
}

// FUNCTION //
long factorial(int num)
{
    long result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    return result;
}