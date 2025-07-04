// CREATE AN ARRAY USING CALLOC AND FILL IT WITH RANDOM NUMBERS, THEN USE REALLOC TO SHRINK THE ARRAY SIZE BY HALF AND PRINT THE REMAINING NUMBER //

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    int *arr = (int *)calloc(size, sizeof(int));
    if (arr == NULL)
    {
        printf("Initial memory allocation failed\n");
        return 1;
    }

    srand(time(NULL)); // Seed random generator

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        printf("%d element: %d\n", i + 1, arr[i]);
    }

    printf("\nAfter realloc (shrinking to half):\n");
    int newSize = size / 2;
    arr = (int *)realloc(arr, newSize * sizeof(int));
    if (arr == NULL)
    {
        printf("Reallocation failed\n");
        return 1;
    }

    for (int i = 0; i < newSize; i++)
    {
        printf("%d element: %d\n", i + 1, arr[i]);
    }

    free(arr);
    return 0;
}
