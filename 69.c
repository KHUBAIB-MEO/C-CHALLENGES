// CREATE A PROGRAM TO CHECK IF GIVEN ARRAY IS SORTED OR NOT IF NOT SORT THE ARRAY//

#include <stdio.h>
int main()
{
    int num, sort = 0, temp;
    // Enter the number of elements in the array
    printf("Enter how many number you want to add: ");
    scanf("%d", &num);
    int arr[num];

    // Take input for array elements
    for (int i = 0; i < num; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // If there's only one element, the array is already sorted
    if (num == 1)
    {
        printf("Array is sorted\n");
        return 0;
    }

    // Check if the array is already sorted in ascending order
    for (int i = 0; i < num - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            printf("Array is not sorted\n");
            sort = 1;
            break;
        }
    }

    if (sort == 0)
    {
        printf("Array is sorted\n");
    }
    else if (sort == 1)
    {
        // Sort the array in ascending order
        for (int i = 0; i < num; i++)
        {
            for (int j = i + 1; j < num; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        // Print the sorted array
        printf("Sorted array is : ");
        for (int i = 0; i < num; i++)
        {
            printf("%d|", arr[i]);
        }
    }
    return 0;
}