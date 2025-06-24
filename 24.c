// CREATE A PROGRAM THAT CATEGORIZE A PERSON INTO DIFFERENT AGE GROUPS //
#include <stdio.h>
int main()
{

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age == 0 || age < 0)
    {
        printf("Age must be grater then 0\n");
    }
    else
    {
        if (age > 60)
        {
            printf("Senior\n");
        }
        else if (age < 61 && age > 19)
        {
            printf("Adult\n");
        }
        else if (age < 20 && age > 12)
        {
            printf("Teen\n");
        }
        else
        {
            printf("Child\n");
        }
    }
    return 0;
}