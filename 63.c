// CREATE A PROGRAM THAT CONVERT A LARGE NUMBER OF KILOMETER TO MILES USING LONG OR LONG LONG TO STORE THE DISTANCE

#include <stdio.h>
int main()
{
    long long km;
    double mile;
    printf("Enter km: ");
    scanf("%lld", &km);
    mile = km * 0.621371;
    printf("The %lld km in miles is %.2f", km, mile);
    return 0;
}