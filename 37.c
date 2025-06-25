// CREATE A PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS PRIME NUMBER OR NOT USING WHILE LOOP//

#include <stdio.h>
int main()
{
    int prime;
    printf("Enter number: ");
    scanf("%d", &prime);
    int i = prime - 1;
    if (prime == 1 || prime == 2)
    {
        printf("%d is a prime number\n", prime);
        return 0;
    }
    while (i > 1)
    {
        if (prime % i == 0)
        {
            printf("%d is not a prime number\n", prime);
            return 0;
        }
        i--;
    }
    printf("%d is a prime number\n", prime);

    return 0;
}