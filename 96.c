// USE CALLOC TO ALLOCATE AN ARRAY FOR A SET OF CHAR CHARACTERS REPRESENTING A SENTENCE, ENSURING ALL THE MEMORY IS INITIALIZE TO ZERO //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removeNewLine(char *text);

int main()
{
    char *arr = (char *)calloc(100, sizeof(char));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("enter string: ");
    fgets(arr, 100, stdin);
    removeNewLine(arr);
    printf("You entered\n");
    printf("%s", arr);

    free(arr);
    return 0;
}

void removeNewLine(char *text)
{
    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n')
    {
        text[len - 1] = '\0';
    }
}