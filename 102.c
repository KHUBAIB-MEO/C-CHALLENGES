// CREATE A PROGRAM THAT TAKES USER INPUT AND WRITE IT INTO THE FILE, ENSURING EACH ENTRY IS ON A NEW LINE //

#include <stdio.h>
#include <string.h>

void removeNewLine(char text[]);

int main()
{
    char string[100];
    FILE *file = fopen("text.txt", "a");
    if (file == NULL)
    {
        printf("File can't open\n");
        return 1;
    }
    while (1)
    {
        printf("Enter exit for exit\n");
        printf("Enter text: ");
        fgets(string, sizeof(string), stdin);
        removeNewLine(string);
        if (strcmp(string, "exit") == 0 || strcmp(string, "EXIT") == 0)
        {
            break;
        }
        fprintf(file, "%s\n", string);
    }

    fclose(file);
    return 0;
}

void removeNewLine(char text[])
{
    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n')
        text[len - 1] = '\0';
}