// CREATE A PROGRAM THAT DECLARE AN INTEGER AND A POINTER TO IT. ASSIGN A VALUE AND PRINT IT USING A POINTER //

#include <stdio.h>
int main()
{
    int a;
    int *ptr = &a;
    printf("Enter a number: ");
    scanf("%d", ptr);
    printf("%d", a);
    return 0;
}