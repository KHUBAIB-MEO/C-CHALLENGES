// WRITE A FUNCTION TO CHECK IF STRING IN PALINDROME OR NOT //

#include <stdio.h>
#include <string.h>

void removeNewLine(char text[]);
void reverseString(char string[]);
void uppercase(char text[]);

int main()
{
    char string[100];
    char copyString[100];
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    removeNewLine(string);
    strcpy(copyString, string);
    reverseString(string);
    uppercase(string);
    uppercase(copyString);
    if (strcmp(string, copyString) == 0)
    {
        printf("String is palindrome\n");
    }
    else
    {
        printf("String is not palindrome\n");
    }
    return 0;
}

void reverseString(char string[])
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

void uppercase(char text[])
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = text[i] - 32;
        }
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