// INITIALIZE AN ARRAY OF BOOK STRUCTURE WITH DIFFERENT DATA FOR EACH BOOK USING DESIGNATED INITIALIZERS //

#include <stdio.h>
#include <string.h>

void removeNewLine(char text[]);

typedef struct
{
    char title[50];
    char author[50];
    int price;
} bookInfo;

void printBook(bookInfo books[]);

int main()
{
    bookInfo books[3] = {
        {.title = "GOT", .author = "George R.R. Martin", .price = 1000},
        {.title = "LOTR", .author = "J.R.R. Tolkien", .price = 1200},
        {.title = "1984", .author = "George Orwell", .price = 800}};

    printBook(books);
    return 0;
}

void printBook(bookInfo books[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("Book titel: %s\n", books[i].title);
        printf("Author neme: %s\n", books[i].author);
        printf("Book price: %d\n", books[i].price);
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