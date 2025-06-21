// CREATE A PROGRAM TO INPUT OF THE PERSON AND RESPOND WITH "WELCOME "NAME" TO CODING" //

#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name: ");
    scanf(" %19s", &name);

    printf("WELCOME %s TO CODING\n", name);
    return 0;
}