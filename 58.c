// CREATE A PROGRAM USING RECURSION TO CHECK IF THE NUMBER IS PALINDROME OR NOT //
#include <stdio.h>

int reverseNum(int, int);

int main()
{
    int num, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    reverse = reverseNum(num, reverse);
    if (num == reverse)
    {
        printf("Number is palindrome\n");
    }
    else
    {
        printf("Number is not palindrome\n");
    }
    return 0;
}

int reverseNum(int num, int reverse)
{
    if (num == 0)
    {
        return reverse;
    }
    reverse = (reverse * 10) + num % 10;
    num = num / 10;
    return reverseNum(num, reverse);
}