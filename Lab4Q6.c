// Write a program that returns a letter grade based on a quiz score.
// The input will be the integer score from a ten-point quiz
// The letter grades are assigned by:
// 9-10“A”7-8“B”5-6“C”3-4“D”<3“F”

#include <stdio.h>
int main()
{
    int grade;
    printf("Enter the integer scored in the ten-point quiz \n");
    scanf("%d", &grade);

    if (grade == 9 || grade == 10)
    {
        printf("You have scored A grade in your Test \n");
    }
    if (grade == 7 || grade == 8)
    {
        printf("You have scored B grade in your Test \n");
    }
    if (grade == 5 || grade == 6)
    {
        printf("You have scored C grade in your Test \n");
    }
    if (grade == 3 || grade == 4)
    {
        printf("You have scored D grade in your Test \n");
    }
    if (grade < 3)
    {
        printf("You have scored F grade in your Test \n");
    }

    return 0;
}