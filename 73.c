// WRITE A FUNCTION THAT USES POINTER ARITHMETIC TO COPY AN ARRAY OF CHAR INTO ANOTHER //

#include <stdio.h>

void inputElement(char arr[], int);
void printArray(char arr[], int);
void copyArray(char *arr, char *copyArray, int num);

int main()
{
    int num;
    printf("Enter how many numbers you want to add: ");
    scanf("%d", &num);
    char arr[num];
    char copiedArray[num];

    inputElement(arr, num);
    printf("Original array\n");
    printArray(arr, num);
    printf("\nCopied array\n");
    copyArray(arr, copiedArray, num);
    printArray(copiedArray, num);
    return 0;
}

void inputElement(char arr[], int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf(" %c", &arr[i]);
    }
}

void printArray(char arr[], int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("%c ", arr[i]);
    }
}

void copyArray(char *arr, char *copyArray, int num)
{
    for (int i = 0; i < num; i++)
    {
        *(copyArray + i) = *(arr + i);
    }
}
