// CREATE A PROGRAM TO CHECK ARRAY IS PALINDROME OR NOT //

#include <stdio.h>

void inputElement(int arr[], int);
void printArray(int arr[], int);
void checkPalindrome(int arr[], int num);

int main()
{
    int num;
    printf("Enter how many numbers you want to add: ");
    scanf("%d", &num);
    int arr[num];

    inputElement(arr, num);
    printf("Original array\n");
    printArray(arr, num);
    checkPalindrome(arr, num);
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
    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
}

void checkPalindrome(int arr[], int num)
{
    for (int i = 0; i < num / 2; i++)
    {
        if (arr[i] != arr[num - 1 - i])
        {
            printf("\nArray is not a palindrome\n");
            return;
        }
    }
    printf("\nArray is a palindrome\n");
}