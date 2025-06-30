/*WRITE A PROGRAM THAT INITIALIZES AN UNSIGNED INT AND AN INTEGER TO ITS MAXIMUM POSSIBLE VALUE ADD 1 TO BOTH AND PRINT THE RESULT TO SHOW HOW THE UNSIGNED INT WRAP
AROUND TO 0, WHERE AS THE INT REMAIN NEGATIVE DUE TO OVERFLOW*/

#include <stdio.h>
int main()
{
    unsigned int num1 = 4294967295;
    int num2 = 2147483647;

    printf("int = %d\n", num2 + 1);
    printf("unsigned int = %u\n", num1 + 1);
    return 0;
}