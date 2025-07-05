// CREATE A PROGRAM THAT PERFORM BOTH READING AND WRITING OPERATION AN A FILE CALLED DATA.TXT //

#include <stdio.h>
int main()
{
    int size;
    FILE *sum = fopen("data.txt", "w+");
    if (sum == NULL)
    {
        printf("File can't create\n");
        return 1;
    }
    printf("Enter how many number you want to enter: ");
    scanf("%d", &size);
    int arr[size];
    for (int j = 0; j < size; j++)
    {
        printf("Enter %d element: ", j + 1);
        scanf("%d", &arr[j]);
    }
    for (int j = 0; j < size; j++)
    {
        fprintf(sum, "%d\n", arr[j]);
    }
    rewind(sum);

    int number;
    int i = 0;
    int numberSum = 0;
    while (fscanf(sum, "%d", &number) == 1)
    {
        numberSum = numberSum + number;
        i++;
    }
    printf("The sum of numbers is: %d\n", numberSum);

    fclose(sum);

    return 0;
}