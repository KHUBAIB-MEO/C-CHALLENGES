// CALL A FUNCTION THAT PRINTS THE CURRENT DEFINE A FUNCTION WITHOUT PARAMETER //

#include <stdio.h>
#include <time.h>

void date();

int main()
{
    date();
    return 0;
}

void date()
{
    time_t t;
    time(&t);
    char *time_info = asctime(localtime(&t));
    printf("Current date is %s", time_info);
}