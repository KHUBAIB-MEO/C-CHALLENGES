// WRITE A FUNCTION THAT ACCEPTS A POINTER TO A STUDENT STRUCTURE WITH FEILDS FOR ID, NAME, YEAR, GPA AND MODIFIES ITS GRADES //

#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char name[50];
    int year;
    float gpa;
    char grade;
} student;

void decreaseGrade(student *stu);
void increaseGrade(student *stu);

int main()
{
    student stu[] = {
        {1, "Alice", 2022, 3.75, 'A'},
        {2, "Bob", 2021, 3.40, 'B'},
        {3, "Charlie", 2023, 3.90, 'A'},
        {4, "Diana", 2022, 3.10, 'C'},
        {5, "Ethan", 2024, 2.95, 'D'}};

    for (int i = 0; i < 5; i++)
    {
        increaseGrade(&stu[i]);
        printf("Student: %s, New Grade: %c\n", stu[i].name, stu[i].grade);
    }

    return 0;
}

void increaseGrade(student *stu)
{
    if (stu->grade > 'A')
    {
        stu->grade--;
    }
}
