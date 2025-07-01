// READ A LINE OF TEXT FROM THE USER USING FGETS AND THEN PRINT IT USING PUTS //

#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    puts(text);
    return 0;
}