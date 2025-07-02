// DEFINE A CAR STRUCTURE WITH FEILDS FOR MAKE, MODEL, YEAR AND COLOR //

#include <stdio.h>
#include <string.h>

typedef struct
{
    char make[50];
    char model[50];
    char color[50];
    int year;
} Car;

int main()
{
    Car car1 = {"Toyota", "Corolla", "White", 2022};

    printf("Car Info:\n");
    printf("Make : %s\n", car1.make);
    printf("Model: %s\n", car1.model);
    printf("Color: %s\n", car1.color);
    printf("Year : %d\n", car1.year);

    return 0;
}
