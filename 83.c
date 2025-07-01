// WRITE A FUNCTION THAT TAKE A STRING AND REVERSE IT IN PLACE //

#include <stdio.h>
#include <string.h>

void removeNewLine(char text[]);
void reverse(char string[]);

int main()
{
    char string[100];
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    removeNewLine(string);
    reverse(string);
    printf("Reverse string is %s", string);
    return 0;
}

void reverse(char string[])
{
    char temp;
    int len = strlen(string);
    for (int i = 0; i < len / 2; i++)
    {
        temp = string[i];
        string[i] = string[len - i - 1];
        string[len - i - 1] = temp;
    }
}

void removeNewLine(char text[])
{
    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n')
    {
        text[len - 1] = '\0';
    }
}