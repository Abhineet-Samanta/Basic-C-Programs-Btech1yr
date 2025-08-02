// Write a program to check whether a given year is a leap year or not.
// A leap year occurs once every four years and to check whether a year is a leap year,
// the following conditions should be satisfied:
// It is a multiple of 4 but not of 100, or
// It is a multiple of 400.

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year to be checked:");
    scanf("%d", &year);
    if ((year % 4) == 0 && ((year % 100) != 0 || (year % 400) == 0))
        printf("The year is a leap year");
    else
        printf("The year is not a leap year");
    return 0;
}