// CREATE A PROGRAM TO SUMM ALL ODD NUMBER FROM 1 TO A SPECIFIC NUMBER N //

#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("The sum of all odd numbers from 1 to %d is: %d\n", num, sum);
    return 0;
}