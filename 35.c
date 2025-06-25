// CREATE A PROGRAM TO FIND THE LEAST COMMON MULTIPLE OF TWO NUMBERS //
#include <stdio.h>
int main()
{
    int num1, num2, lcm;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int min = (num1 > num2) ? num1 : num2;
    int max = num1 * num2;

    for (int i = min; i <= max; i++)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
    }
    printf("The LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
