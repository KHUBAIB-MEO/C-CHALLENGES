#include <stdio.h>
#include <string.h>

typedef struct
{
    char title[50];
    char author[50];
    int price;
} bookInfo;

typedef struct
{
    int id;
    char name[50];
    int year;
    float gpa;
    char grade;
    bookInfo borrow[2];
} student;

void printInfo(student stu);

int main()
{
    student s1 = {
        .id = 15045,
        .name = "BOB",
        .year = 2020,
        .grade = 'A',
        .gpa = 3.6};

    strcpy(s1.borrow[0].author, "RR");
    strcpy(s1.borrow[0].title, "GOT");
    s1.borrow[0].price = 200;

    strcpy(s1.borrow[1].author, "JK");
    strcpy(s1.borrow[1].title, "HP");
    s1.borrow[1].price = 300;

    printInfo(s1);
    return 0;
}

void printInfo(student stu)
{
    printf("Student name: %s\n", stu.name);
    printf("Student id: %d\n", stu.id);
    printf("Student year: %d\n", stu.year);
    printf("Student grade: %c\n", stu.grade);
    printf("Student CGPA: %.2f\n", stu.gpa);

    for (int i = 0; i < 2; i++)
    {
        printf("Book %d title: %s\n", i + 1, stu.borrow[i].title);
        printf("Book %d author: %s\n", i + 1, stu.borrow[i].author);
        printf("Book %d price: %d\n", i + 1, stu.borrow[i].price);
    }
}
