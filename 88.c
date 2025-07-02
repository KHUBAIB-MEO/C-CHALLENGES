// CREATE A PROGRAM WHERE YOU NEED TO STORE AND PROCESS DATA FOR A BOOK WITH ATTRIBUTES LIKE TITLE,AUTHOR AND PRICE //

#include <stdio.h>
#include <string.h>

void removeNewLine(char text[]);

typedef struct
{
    char bookTitle[20];
    char author[20];
    int price;
} bookInfo;

int main()
{
    bookInfo b1;
    printf("Enter book1 title: ");
    fgets(b1.bookTitle, sizeof(b1.bookTitle), stdin);
    removeNewLine(b1.bookTitle);
    printf("Enter author name: ");
    fgets(b1.author, sizeof(b1.author), stdin);
    removeNewLine(b1.author);
    printf("Enter book1 price: ");
    scanf("%d", &b1.price);
    while (getchar() != '\n')
        ;

    bookInfo b2;
    printf("Enter book2 title: ");
    fgets(b2.bookTitle, sizeof(b2.bookTitle), stdin);
    removeNewLine(b2.bookTitle);
    printf("Enter author name: ");
    fgets(b2.author, sizeof(b2.author), stdin);
    removeNewLine(b2.author);
    printf("Enter book2 price: ");
    scanf("%d", &b2.price);

    printf("Book 1 info\n");
    printf("%s\n%s\n%d", b1.bookTitle, b1.author, b1.price);

    printf("\nBook 2 info\n");
    printf("%s\n%s\n%d", b2.bookTitle, b2.author, b2.price);
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