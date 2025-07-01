// CREATE A PROGRAM TO FIND SUM OF TWO DIAGONAL ELEMENT IN A 2-D ARRAY //

#include <stdio.h>

void inputElement(int row, int column, int arr[][column]);
void printArray(int row, int column, int arr[][column]);
void sumOfDiagonal(int row, int column, int arr[][column]);

int main()
{

    int row, column;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of column: ");
    scanf("%d", &column);
    if (row != column)
    {
        printf("Rows and column must be equal\n");
        return 0;
    }
    int arr[row][column];
    inputElement(row, column, arr);
    sumOfDiagonal(row, column, arr);
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

void sumOfDiagonal(int row, int column, int arr[][column])
{
    int firstDiagonal = 0;
    int secondDiagonal = 0;
    int combineSum = 0;
    for (int i = 0; i < row; i++)
    {
        firstDiagonal = firstDiagonal + arr[i][i];
        secondDiagonal = secondDiagonal + arr[i][row - i - 1];
    }

    combineSum = firstDiagonal + secondDiagonal;
    if (row % 2 != 0)
    {
        int middleElement = row / 2;
        combineSum = combineSum - arr[middleElement][middleElement];
    }

    printf("\nThe sum of first diagonal is %d\n", firstDiagonal);
    printf("\nThe sum of second diagonal is %d\n", secondDiagonal);
    printf("\nThe sum of total diagonals is %d\n", combineSum);
}