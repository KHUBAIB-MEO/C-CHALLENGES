// USE PRINTF WITH FORMAT SPECIFIER TO FORMAT AND PRINT A DATE STRING (DAY, MONTH, YEAR)

#include <stdio.h>
#include <string.h>
void removeNewLine(char text[]);

int main()
{
    char day[20];
    char month[20];
    int year;
    printf("Enter day: ");
    fgets(day, sizeof(day), stdin);
    removeNewLine(day);
    printf("Enter month: ");
    fgets(month, sizeof(month), stdin);
    removeNewLine(month);
    printf("Enter year: ");
    scanf("%d", &year);

    printf("%s:%s:%d", day, month, year);
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