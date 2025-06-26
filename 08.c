// CREATE A PROGRAM TO DEFINE A CONSTANT FOR THE MATHEMATICAL VALUE PI(3.14159) AND USE IT TO CALCULATE AND PRINT THE CIRCUMFERENCE OF A CIRCLE WITH A RADIUS INPUT FROM USER//

#include <stdio.h>

int main()
{
    const float pi = 3.14159;
    float radius;

    printf("Enter circle radius: ");
    scanf(" %f", &radius);

    float circumference = 2 * pi * radius;

    printf("\nThe circumference of the circle is: %f", circumference);

    return 0;
}