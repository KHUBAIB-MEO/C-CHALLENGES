// CALL THE FUNCTION THAT TAKE 5 INT AND RETURN AVERAGE //

#include <stdio.h>

float getAverage(int a, int b, int c, int d, int e);

int main()
{
    float avg;

    avg = getAverage(10, 60, 95, 42, 76);

    printf("Average: %.2f\n", avg);

    return 0;
}

float getAverage(int a, int b, int c, int d, int e)
{
    return (a + b + c + d + e) / 5.0;
}
