// CREATE A PROGRAM TO PRINT THE AREA OF THE SQUARE BY INPUTTING IT'S SIDE LENGTH//

#include <stdio.h>

int main()
{
    float side;
    printf("Enter lenght of square side in cm: ");
    scanf("%f", &side);

    float area = side * side;

    printf("\nArea of the Square is: %.2f", area);
    return 0;
}