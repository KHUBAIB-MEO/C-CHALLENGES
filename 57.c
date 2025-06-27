// CREATE A FUNCTION USING RECURSION TO DISPLAY A FIBONACCI SERIES UPTO A CERTAIN NUMBER //

#include <stdio.h>

int fibonacciSeries(int);

int main()
{
    int lim;
    printf("Enter a limit: ");
    scanf("%d", &lim);
    for (int i = 0; i < lim; i++)
    {
        printf("%d ", fibonacciSeries(i));
    }

    return 0;
}

int fibonacciSeries(int pos)
{
    if (pos <= 1)
    {
        return pos;
    }

    return fibonacciSeries(pos - 1) + fibonacciSeries(pos - 2);
}