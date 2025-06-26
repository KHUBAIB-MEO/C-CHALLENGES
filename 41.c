// WRITE A PROGRAM TO CHECK IS THE NUMBER IS PALINDROME//
#include <stdio.h>
int main()
{
    int num, reverse = 0, copy;
    printf("Enter a number: ");
    scanf("%d", &num);

    copy = num;
    while (num > 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num = num / 10;
    }
    if (copy == reverse)
    {
        printf("%d is palindrome number", copy);
    }
    else
    {
        printf("%d is not a palindrome number", copy);
    }

    return 0;
}