// CREATE A PROGRAM TO MERGE TWO SORTED ARRAYS //

#include <stdio.h>

void printArray(int arr[], int);
void mergeArray(int arr1[], int arr2[], int arr3[], int, int, int);

int main()
{
    int arr1Size = 6;
    int arr2Size = 6;
    int arr3Size = 12;
    int arr1[] = {1, 3, 5, 7, 9, 15};
    int arr2[] = {2, 4, 6, 8, 10, 11};
    int arr3[arr3Size];
    mergeArray(arr1, arr2, arr3, arr1Size, arr2Size, arr3Size);
    printArray(arr3, arr3Size);
    return 0;
}

void printArray(int arr[], int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
}

void mergeArray(int arr1[], int arr2[], int arr3[], int arr1Size, int arr2Size, int arr3Size)
{
    int i = 0, j = 0, k = 0;

    while (i < arr1Size && j < arr2Size)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < arr1Size)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < arr2Size)
    {
        arr3[k++] = arr2[j++];
    }
}