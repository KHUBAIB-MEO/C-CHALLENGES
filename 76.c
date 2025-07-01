// CREATE A PROGRAM TO FIND SUM AND AVEREAGE OF ELEMENT IN A 2-D ARRAY //

#include <stdio.h>

void inputElement(int row, int column, int arr[][column]);
void printArray(int row, int column, int arr[][column]);
void sumOfElement(int row, int column, int arr[][column]);

int main()
{

    int row, column;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of column: ");
    scanf("%d", &column);
    int arr[row][column];
    inputElement(row, column, arr);
    sumOfElement(row, column, arr);
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

void sumOfElement(int row, int column, int arr[][column])
{
    int sum = 0;
    float avg = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    avg = (float)sum / (row * column);
    printf("\nThe sum of all elements in the 2D array is %d\n", sum);
    printf("The average of all elements in the 2D array is %.2f\n", avg);
}