// CREATE A PROGRAM THAT COMPUTE THE SUM OF THE DIGITS OF AN INTEGER //

#include <stdio.h>
int main()
{
    int num;
    long long sum = 0;
    printf("Enter number: ");
    scanf("%lld", &num);
    while (num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }

    printf("The sum of a given integer is: %lld", sum);
    return 0;
}
