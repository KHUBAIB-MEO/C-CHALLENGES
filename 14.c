// CREATE A PROGRAM TO CALCULATE A PERIMETER OF A RECTANGLE //

#include <stdio.h>
int main()
{
    float lenght, width, perimeter;
    printf("Enter length of rectangle: ");
    scanf("%f", &lenght);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    perimeter = 2 * (lenght + width);

    printf("Perimeter of rectangle = %.2f", perimeter);

    return 0;
}