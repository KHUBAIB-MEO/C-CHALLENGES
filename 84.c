// CREATE A TRIM FUNCTION THAT REMOVE LEADING AND TRAILING SPACES FROM STRING //

#include <stdio.h>
#include <string.h>

void removeNewLine(char text[]);
void trim(char string[]);
int main()
{
    char string[100];
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    removeNewLine(string);
    trim(string);
    puts(string);
    return 0;
}

void trim(char string[])
{
    int len = strlen(string);
    int j = len;
    while (string[0] == ' ')
    {
        for (int i = 0; i < len; i++)
        {
            string[i] = string[i + 1];
        }
        len--;
    }

    while (len > 0 && string[len - 1] == ' ')
    {
        string[len - 1] = '\0';
        len--;
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