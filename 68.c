// CREATE A PROGRAM TO FIND MAXIMUM AND MINIMUM ELEMENT IN AN ARRAY //

#include <stdio.h>
int main()
{
    int num, max, min;
    printf("Enter how many number you want to add: ");
    scanf("%d", &num);
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < num; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        else if (min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("\nThe maximum number in an array is %d\n", max);
    printf("The minimum number in an array is %d\n", min);
    return 0;
}