// CRETAE A PROGRAM USING FOR LOOP MULTIPLICATION TABLE FOR A NUMBER //

#include <stdio.h>
int main()
{
    int num;
    printf("Enter number for table: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, (num * i));
    }
}