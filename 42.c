// CREATE A PYRAMID PATTERN USING LOOP//

#include <stdio.h>
int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nRIGHT HALF PYRAMIND\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nREVERSE RIGHT HALF PYRAMIND\n");
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nLEFT HALF PYRAMIND\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows - 1; j >= i; j--)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}