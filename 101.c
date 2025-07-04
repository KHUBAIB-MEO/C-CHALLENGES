// WRITE A PROGRAM THAT COPIES ONE TEXT FILE'S CONTENT TO ANOTHER, STOPPING WHEN IT REACHES EOF OF THE SOURCE FILE

#include <stdio.h>
#include <string.h>

void removeNewLine(char text[]);

int main()
{
    char text[200];

    // Step 1: Write user input to the first file
    FILE *firstFile = fopen("First file.txt", "w");
    if (firstFile == NULL)
    {
        printf("First file can't be opened\n");
        return 1;
    }

    printf("Enter text (type 'exit' to stop):\n");
    while (1)
    {
        printf("Enter text: ");
        fgets(text, sizeof(text), stdin);
        removeNewLine(text);

        if (strcmp(text, "exit") == 0 || strcmp(text, "EXIT") == 0)
            break;

        fprintf(firstFile, "%s\n", text);
    }

    fclose(firstFile); // Close after writing

    // Step 2: Reopen for reading and copy to second file
    firstFile = fopen("First file.txt", "r");
    FILE *secondFile = fopen("Second file.txt", "w");

    if (firstFile == NULL || secondFile == NULL)
    {
        printf("Files can't be opened for copying\n");
        return 1;
    }

    char line[200];
    while (fgets(line, sizeof(line), firstFile))
    {
        removeNewLine(line);
        if (strcmp(line, "exit") == 0 || strcmp(line, "EXIT") == 0)
            break;

        fprintf(secondFile, "%s\n", line);
    }

    fclose(firstFile);
    fclose(secondFile);

    printf("Contents copied successfully.\n");

    return 0;
}

void removeNewLine(char text[])
{
    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n')
        text[len - 1] = '\0';
}
