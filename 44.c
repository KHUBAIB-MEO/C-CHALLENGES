// CREATE A PROGRAM THAT CALCULATE THE SUMM OF ALL NUMBER ENTERED BY A USER UNTIL USER ENTER 0 THE TOTAL SUM SHOULD THEN BE DISPLAYED //
#include <stdio.h>
int main()
{
    int num, sum = 0;
    do
    {
        printf("Enter number: ");
        scanf("%d", &num);
        if (num != 0)
        {
            sum = sum + num;
        }
        printf("\nEnter 0 for exit\n");
    } while (num != 0);
    printf("\nTotal sum should be %d\n", sum);
    return 0;
}