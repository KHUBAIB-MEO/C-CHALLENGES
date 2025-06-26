// CREATE A PROGRAM TO REVERSE THE DIGITS OF A NUMBER//

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
    printf("The reverse of number %d is %d\n", copy, reverse);

    return 0;
}