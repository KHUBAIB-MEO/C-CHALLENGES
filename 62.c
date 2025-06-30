/*IMPLEMENT A VOID MINMAX (int *a, int *b, int *min, int *max) FUNCTION THAT TAKES TWO INTEGER POINTERS a AND b AS INPUT AND ASSIGN THE SMALLER VALUE TO MIN AND THE LARGER VALUE TO MAX USING
CALL BY REFERENCE. WRITE A MAIN FUNCTION TO TEST IT WITH DIFFERENT VALUES */

#include <stdio.h>

void minmax(int *, int *, int *, int *);

int main()
{
    int a, b, min, max;
    printf("Enter first value: ");
    scanf("%d", &a);
    printf("Enter second value: ");
    scanf("%d", &b);
    minmax(&a, &b, &min, &max);
    printf("The maximum value is: %d\n", max);
    printf("The minumim value is: %d\n", min);

    return 0;
}

void minmax(int *a, int *b, int *min, int *max)
{
    if (*a > *b)
    {
        *max = *a;
        *min = *b;
    }
    else
    {
        *max = *b;
        *min = *a;
    }
}