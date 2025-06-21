// CREATE A PROGRAM TO PRINT THE AREA OF A CIRCLE BY INPUTTING ITS RADIUS //

#include <stdio.h>
int main()
{
    const float pi = 3.14;
    float radius, area;

    printf("Enter radius of a circle for area: ");
    scanf("%f", &radius);

    area = pi * (radius * radius);

    printf("The area of circle is %.2f: ", area);

    return 0;
}