// CREATE A PROGRAM TO CONVERT A STRING TO UPPERCASE //

#include <stdio.h>
#include <string.h>

void removeNewLine(char text[]);

int main()
{
    char text[100];
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    removeNewLine(text);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = text[i] - 32;
        }
    }

    puts(text);
    return 0;
}

void removeNewLine(char text[])
{
    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n')
    {
        text[len - 1] = '\0';
    }
}