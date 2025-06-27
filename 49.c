// WRITE A PROGRAM THAT CONTINUOUSLY READS INTEGRES FROM THE USER AND PRINT THEIR SQUARE. USE AN INFINITE LOOP AND A BREAK STATEMENT TO EXIT WHEN A SPECIAL NUMBER (eg -1) ENTERED //

#include <stdio.h>
int main()
{
    int num;
    while (1 == 1)
    {
        printf("\nEnter -1 for exit\n");
        printf("Enter integers for their square: ");
        scanf("%d", &num);
        if (num == -1)
        {
            break;
        }
        printf("\nThe square of the number %d is %d\n", num, (num * num));
    }
    return 0;
}