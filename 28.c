// CREATE A PROGRAM TO BASED ON A STUDENT SCORE CATEGORIZE AS "HIGH","MODERATE" AND "LOW" USING TERNARY OPERATOR //
#include <stdio.h>
int main()
{
    int score;
    printf("Enter score: ");
    scanf("%d", &score);

    (score > 80) ? printf("HIGH\n") : (score < 81 && score > 49) ? printf("MODERATE\n")
                                                                 : printf("LOW\n");
    return 0;
}