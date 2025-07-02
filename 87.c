// CREATE A PROGRAM USING BREAK TO READ INPUTS FROM THE USER IN A LOOP AND BREAK THE LOOP IS A SPECIFIC KEYWORD (LIKE "EXIT") IS ENTERED //

#include <stdio.h>
#include <string.h>

void removeNewLine(char text[]);
void uppercase(char text[]);

int main()
{
    char string[20];
    while (1 == 1)
    {
        printf("Enter text: ");
        fgets(string, sizeof(string), stdin);
        removeNewLine(string);
        uppercase(string);
        if (strcmp(string, "EXIT") == 0)
        {
            break;
        }
    }

    return 0;
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