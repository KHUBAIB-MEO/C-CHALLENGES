// WRITE A PROGRAM THAT ASKS THE USER FOR A FILENAME, ATTEMPTS TO OPEN IT AND REPORT WHETHER THE OPERATION WAS SUCCESSFUL OR NOT //

#include <stdio.h>
#include <string.h>

void removeNewLine(char text[]);

int main()
{
    char fileName[20];
    char fullPath[150];
    printf("Enter filename: ");
    fgets(fileName, sizeof(fileName), stdin);
    removeNewLine(fileName);
    sprintf(fullPath, "C:\\Users\\jawad\\OneDrive\\Desktop\\C programming challenges\\%s.txt", fileName);
    FILE *pf = fopen(fullPath, "w");
    if (pf == NULL)
    {
        printf("Can't open file\n");
        return 1;
    }
    printf("File open successfully\n");
    fclose(pf);
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