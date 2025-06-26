// CREATE A PROGRAM THAT PROMPTS THE USER TO ENTER A POSITIVE NUMBER. USE A DO WHILE LOOP TO KEEP ASKING FOR THE NUMBER UNTIL THE USER ENTER A VALID POSITIVE NUMBER //

#include <stdio.h>
int main()
{
    int num;
    do
    {
        printf("Enter a positive number:");
        scanf("%d", &num);
        if (num < 1)
        {
            printf("\nInvalid input Try again\n");
        }
        else
        {
            printf("\nValid input\n");
        }
    } while (num < 1);
    return 0;
}