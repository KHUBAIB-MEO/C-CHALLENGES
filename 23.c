// CREATE A PROGRAM THAT CHECK GRADES BASED ON MARKS //

#include <stdio.h>
int main()
{
    float marks;
    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks > 90)
    {
        printf("A grade\n");
    }
    else if (marks < 91 && marks > 75)
    {
        printf("B grade\n");
    }
    else if (marks < 76 && marks > 60)
    {
        printf("C grade\n");
    }
    else if (marks < 61 && marks > 30)
    {
        printf("D grade\n");
    }
    else
    {
        printf("FAIL\n");
    }
    return 0;
}