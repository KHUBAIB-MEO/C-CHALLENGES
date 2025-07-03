// ALLOCATE MEMORY FOR A STRUCT REPRESENTING A POINT WITH X AND Y COORDINATE SET SOME VALUE AND PROPERLY DEALLOCATE THE MEMORY USING FREE //

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x_coordinate;
    int y_coordinate;
} Point;

int main()
{
    Point *start = (Point *)malloc(sizeof(Point));
    Point *end = (Point *)malloc(sizeof(Point));
    if (start == NULL || end == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter start X coordinate: ");
    scanf("%d", &start->x_coordinate);
    printf("Enter start Y coordinate: ");
    scanf("%d", &start->y_coordinate);
    printf("Enter end X coordinate: ");
    scanf("%d", &end->x_coordinate);
    printf("Enter end Y coordinate: ");
    scanf("%d", &end->y_coordinate);

    printf("Start x and y coordinate : (%d,%d)\n", start->x_coordinate, start->y_coordinate);
    printf("End x and y coordinate : (%d,%d)", end->x_coordinate, end->y_coordinate);

    free(start);
    free(end);

    start = NULL;
    end = NULL;
    return 0;
}