// CREATE A SIMPLE TEXT BASED USER LOGIN SYSTEM THAT COMPARES A STORED PASSWORD STRING USING STRCMP //

#include <stdio.h>
#include <string.h>

void removeNewLine(char text[]);

int main()
{
    char userName[] = "KHUBAIB";
    char password[] = "15045";
    char inputUserName[50];
    char inputPassword[50];
    printf("Enter username: ");
    fgets(inputUserName, sizeof(inputUserName), stdin);
    removeNewLine(inputUserName);
    printf("Enter password: ");
    fgets(inputPassword, sizeof(inputPassword), stdin);
    removeNewLine(inputPassword);
    if (strcmp(userName, inputUserName) == 0 && strcmp(password, inputPassword) == 0)
    {
        printf("User login successfully\n");
    }
    else
    {
        printf("Wrong username or password");
    }

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