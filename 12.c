// GIVEN AN INTEGERS VALUE, CONVERT IT INTO FLOATING POINT VALUE AND PRINT BOTH //

#include <stdio.h>
int main()
{
    int value1 = 50;
    float value2 = value1;

    printf("Converted value = %f\n", value2);
    printf("Converted value = %f", (float)value1);

    return 0;
}