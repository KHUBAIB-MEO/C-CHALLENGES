// CREATE A PROGRAM USING CONTINUE TO SUM ALL POSITIVE NUMBERS ENTERED BY THE USER; SKIP ANY NEGATIVE NUMBERS //

#include <stdio.h>
int main()
{
    int num, sum = 0, limit;
    printf("Enter number of how many numbers you want to add: ");
    scanf("%d", &limit);

    for (int i = 0; i < limit; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &num);
        if (num >= 0)
        {
            sum = sum + num;
        }
        else
        {
            continue;
        }
    }
    printf("\nTotal sum is: %d", sum);
    return 0;
}