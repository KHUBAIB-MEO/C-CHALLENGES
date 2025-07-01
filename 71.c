// CREATE A PROGRAM TO REVERSE AN ARRAY //

#include <stdio.h>

void inputElement(int arr[], int);
void printArray(int arr[], int);
void reverseArray(int arr[], int);

int main()
{
    int num;
    printf("Enter how many number you want to add: ");
    scanf("%d", &num);
    int arr[num];

    inputElement(arr, num);
    printf("Original array\n");
    printArray(arr, num);
    printf("\nReverse array\n");
    reverseArray(arr, num);
    return 0;
}

void inputElement(int arr[], int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int num)
{
    printf("\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d|", arr[i]);
    }
}
void reverseArray(int arr[], int num)
{
    printf("\n");
    for (int i = num - 1; i >= 0; i--)
    {
        printf("%d|", arr[i]);
    }
}
