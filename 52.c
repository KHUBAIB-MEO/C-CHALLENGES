// DEFINE A FUNCTION THAT TAKE AN INTEGER AND RETURN ITS SQUARE //

#include <stdio.h>

int square(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The square of a %d is %d", num, square(num));
    return 0;
}

int square(int num)
{
    return (num * num);
}