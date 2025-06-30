// CREATE A PROGRAM TO RETURN A NEW ARRAY DELETING A SPECIFIC ELEMENT //

#include <stdio.h>

void inputElement(int arr[], int);
void printArray(int arr[], int);
int deleteElement(int arr[], int num);

int main()
{
    int num;
    printf("Enter how many number you want to add: ");
    scanf("%d", &num);
    int arr[num];

    inputElement(arr, num);
    num = deleteElement(arr, num);
    printArray(arr, num);
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

int deleteElement(int arr[], int num)
{
    int deletedElement;
    printf("Enter the number you want to delete: ");
    scanf("%d", &deletedElement);
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == deletedElement)
        {
            for (int j = i; j < num - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            printf("\nThe element is successfully deleted\n");
            return --num;
        }
    }
    printf("\nElement not found\n");
    return num;
}