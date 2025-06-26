// CREATE A PROGRAM THAT FIND A FIBONACCI SEREIES UPTO A CERTAIN NUMBER //
#include <stdio.h>
int main()
{
    int num, previous = 0, sum = 0, next = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (previous <= num)
    {
        printf("%d ", previous);
        sum = previous + next;
        previous = next;
        next = sum;
    }

    return 0;
}
