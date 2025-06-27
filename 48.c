// CREATE A PROGRAM USING CONTINUE TO PRINT ONLY EVEN NUMBER USING CONTINUE FOR ODD NUMBER

#include <stdio.h>
int main()
{
    int lim;
    printf("Enter the range (1 to N) to display even numbers: ");
    scanf("%d", &lim);
    for (int i = 1; i <= lim; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        printf("%d is even number\n", i);
    }

    return 0;
}