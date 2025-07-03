// CREATE A PROGRAM THAT USE MALLOC TO DYNAMICALLY ALLOCATE AN ARRAY FOR A SPECIFIED NUMBER OF FLOAT VALUE ENTERED BY THE USER AND THEN STORE USER ENTERED NUMBER INTO IT //

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter size of array: ");
    scanf("%d", &num);

    float *arr = (float *)malloc(num * sizeof(float));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < num; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d number is %.2f\n", i + 1, arr[i]);
    }

    free(arr);
    arr = NULL;
    return 0;
}