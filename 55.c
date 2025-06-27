// DEMONSTRATE WITH A FUNCTION THAT THE ORIGINAL INTEGER PASSED TO IT DOES NOT CHANGE AFTER INCREMENTING IT INSIDE THE FUNCTION //

#include <stdio.h>

void increment(int num);

int main()
{
    int value = 10;
    increment(value);
    printf("Value in main after function call: %d\n", value);
    return 0;
}

void increment(int num)
{
    num = num + 1;
    printf("Value inside function: %d\n", num);
}
