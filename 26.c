// CREATE A PROGRAM TO FIND THE GIVEN NUMBER IS EVEN OR ODD USING TERNARY OPERATOR //

#include <stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is even\n", num) : printf("%d is odd\n", num);

    return 0;
}