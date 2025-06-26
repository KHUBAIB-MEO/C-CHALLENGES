// CREATE A PROGRAM TO USING FOR TO DISPLAY IS A NUMBER IF ITS PRIME OR NOT //

#include <stdio.h>
int main()
{
    int prime;
    printf("Enter number: ");
    scanf("%d", &prime);
    if (prime == 1)
    {
        printf("%d is not a prime number\n", prime);
        return 0;
    }
    else if (prime == 2)
    {
        printf("%d is a prime number\n", prime);
        return 0;
    }
    for (int i = prime - 1; i > 1; i--)
    {
        if (prime % i == 0)
        {
            printf("%d is not a prime number\n", prime);
            return 0;
        }
    }

    printf("%d is a prime number\n", prime);

    return 0;
}