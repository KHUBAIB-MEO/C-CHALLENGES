// CREATE A PROGRAM TO FIND THE ABSOLUTE VALUE OF A GIVEN INTEGER USING TERNARY OPERATOR //

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    (num < 0) ? printf("absolute value of %d is %d\n", num, abs(num)) : printf("absolute value of %d is %d\n", num, num);

    return 0;
}