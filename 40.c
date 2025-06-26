// CREATE A PROGRAM TO CHECK IF THE NUMBER IS ARMSTRONG NUMBER //

#include <stdio.h>
#include <math.h>

int main()
{
    int copy1, num, sum = 0, temp1, temp2, copy2, len = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    copy1 = num;
    copy2 = num;

    // find the lenght of a number
    while (copy2 > 0)
    {
        temp2 = copy2 % 10;
        copy2 = copy2 / 10;
        len++;
    }

    // calculation for armstrong number //
    while (num > 0)
    {
        temp1 = num % 10;
        double res = pow(temp1, len);
        sum = sum + (int)res;
        num = num / 10;
    }

    // check for armstrong number
    if (sum == copy1)
    {
        printf("%d is an armstrong number\n", copy1);
    }
    else
    {
        printf("%d is not an armstrong number\n", copy1);
    }

    return 0;
}
