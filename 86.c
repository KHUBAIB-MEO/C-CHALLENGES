// CREATE A PROGRAM USING DO WHILE LOOP TO FIND THE PASSWORD CHECKER UNTIL A VALID PASSWORD IS ENTERED //

#include <stdio.h>
#include <string.h>

void removeNewLine(char text[]);

int main()
{
    char password[] = "15045";
    char inputPassword[20];
    do
    {
        printf("Enter password: ");
        fgets(inputPassword, sizeof(inputPassword), stdin);
        removeNewLine(inputPassword);
        if (strcmp(password, inputPassword) != 0)
        {
            printf("\nWrong password\nTry again\n");
        }
    } while (strcmp(password, inputPassword) != 0);

    printf("\nWelcome\n");
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