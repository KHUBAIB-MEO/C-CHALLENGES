// CREATE A PROGRAM TO DEMONSTRATE THE DIFFERENCE IN RANGE BETWEEN LONG AND LONG LONG BY CALCULATING THE FACTORIAL OF 20 //

#include <stdio.h>
int main()
{
    int num = 20;
    long fact1 = 1;
    long long fact2 = 1;
    for (int i = 1; i <= num; i++)
    {
        fact1 = fact1 * i;
        fact2 = fact2 * i;
    }

    printf("The factorial of %d is %ld in long\n", num, fact1);
    printf("The factorial of %d is %lld in long long", num, fact2);
    return 0;
}