// CREATE A PROGRAM THAT PERFORM BOTH READING AND WRITING OPERATION AN A FILE CALLED DATA.TXT //

#include <stdio.h>
int main()
{
    FILE *file = fopen("data.txt", "r+");
    if (file == NULL)
    {
        printf("File can't create\n");
        return 1;
    }
    fseek(file, 0, SEEK_END);
    fputs("\nHow are you", file);
    fclose(file);

    return 0;
}