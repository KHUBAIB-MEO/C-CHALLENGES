// PASS A CAR STRUCTURE TO A FUNCTION THAT PRINT OUT A DESCRIPTION OF THE CAR IN ONE COMPLETE SENTENCE //

#include <stdio.h>

typedef struct
{
    char make[50];
    char model[50];
    char color[50];
    int year;
} Car;

void printCarInfo(Car car);

int main()
{
    Car car1 = {"Toyota", "Corolla", "White", 2022};
    printCarInfo(car1);
    return 0;
}

void printCarInfo(Car car)
{
    printf("This is a %d %s %s in %s color.\n", car.year, car.make, car.model, car.color);
}
