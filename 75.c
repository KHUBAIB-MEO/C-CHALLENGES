// CREATE A PROGRAM TO SEARCH AN ELEMENT IN A 2-D ARRAY //

#include <stdio.h>

void inputElement(int row, int column, int arr[][column]);
void printArray(int row, int column, int arr[][column]);
void searchElement(int row, int column, int arr[][column]);

int main()
{

    int row, column;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of column: ");
    scanf("%d", &column);
    int arr[row][column];
    inputElement(row, column, arr);
    searchElement(row, column, arr);
    printf("\n");
    printArray(row, column, arr);
}

void inputElement(int row, int column, int arr[][column])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter [%d][%d] number: ", i + 1, j + 1);
            scanf(" %d", &arr[i][j]);
        }
    }
}

void printArray(int row, int column, int arr[][column])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void searchElement(int row, int column, int arr[][column])
{
    int searchNum;
    printf("\nEnter the element you want to search: ");
    scanf("%d", &searchNum);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (searchNum == arr[i][j])
            {
                printf("\n%d is present in an array\n", searchNum);
                return;
            }
        }
    }
    printf("\n%d is not present in an array\n", searchNum);
}