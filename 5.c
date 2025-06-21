// CREATE A PROGRAM THAT DECLARE ONE VARIABLE OF EACH OF THE FUNDAMENTAL DATA TYPES (INT, FLOAT, DOUBLE, CHAR) AND PRINT THEIR SIZE USING sizeof() OPEARATOR //

#include <stdio.h>
int main()
{
    int num1;
    float num2;
    double num3;
    char num4;

    printf("Integer size: %lu\n", sizeof(num1));
    printf("Float size: %lu\n", sizeof(num2));
    printf("Doucle size: %lu\n", sizeof(num3));
    printf("Char size: %lu\n", sizeof(num4));
    return 0;
}