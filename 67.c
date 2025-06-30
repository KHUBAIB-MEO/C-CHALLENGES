// CREATE A PROGRAM TO FIND NUMBER OF OCCURENCES OF AN ELEMENT IN AN ARRAY //

#include <stdio.h>
int main()
{
    int num, occurence = 0;
    printf("Enter how many number you want to add: ");
    scanf("%d", &num);
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int check;
    printf("Enter number to check number of occurence in an array: ");
    scanf("%d", &check);
    for (int i = 0; i < num; i++)
    {
        if (check == arr[i])
        {
            occurence++;
        }
    }
    printf("\nThe number %d occurs %d time(s) in the array.\n", check, occurence);

    return 0;
}