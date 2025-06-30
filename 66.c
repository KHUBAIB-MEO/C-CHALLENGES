// CREATE A PROGRAM TO FIND SUM AND AVERAGE OF ALL ELEMENT IN AN ARRAY //

#include <stdio.h>
int main()
{
    int num;
    float sum = 0, avg;
    printf("Enter how many number you want to add: ");
    scanf("%d", &num);
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    avg = sum / num;
    printf("\nThe sum of the element of an array is %.2f\n", sum);
    printf("The average of the element of an array is %.2f", avg);
    return 0;
}