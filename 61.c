// DECLARE A POINTER TO A CHAR AND USE IT TO READ AND PRINT A CHARACTER ENTERED BY THE USER //

#include <stdio.h>
int main()
{
    char a;
    char *ptr = &a;
    printf("Enter a character: ");
    scanf("%c", ptr);
    printf("Character is %c\n", a);

    return 0;
}