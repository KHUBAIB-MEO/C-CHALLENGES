// CREATE A PROGRAM THAT DYNAMICALLY ALLOCATES MEMORY FOR A CAR STRUCTURE AND THEN FREE IT AT THE END OF THE PROGRAM//

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char make[50];
    char model[50];
    char color[50];
    int year;
} Car;

void printCarInfo(Car *car);

int main()
{
    Car *my_car = (Car *)malloc(sizeof(Car));

    printf("Enter car model: ");
    scanf(" %s", my_car->model);
    printf("Enter car company: ");
    scanf(" %s", my_car->make);
    printf("Enter car color: ");
    scanf(" %s", my_car->color);
    printf("Enter car year: ");
    scanf(" %d", &my_car->year);

    printCarInfo(my_car);

    free(my_car);
    my_car = NULL;
    return 0;
}

void printCarInfo(Car *car)
{
    printf("This is a %d %s %s in %s color.\n", car->year, car->make, car->model, car->color);
}
