// Write a program to find the total no. of days for a given number of months counting from January month.
//  Example: m=3, days=31+ (28 0r 29) + 31.
//  jan=march=may=jul=aug=oct=dec=31;
//  apr=jun=sept=nov=30;

#include <stdio.h>
int main()
{
    int month, year;
    printf("Enter the Year: \n");
    scanf("%d", &year);
    printf("Enter the month in integer format say Jan is 1 , Dec is 12 \n");
    scanf("%d", &month);
    int feb;
    if ((year % 4) == 0 && ((year % 100) != 0 || (year % 400) == 0))
    {
        printf("The year is a leap year\n");
        feb = 29;
    }
    else
    {
        printf("The year is not a leap year\n");
        feb = 28;
    }
    int temp;
    switch (month) // Start a switch statement based on the input month number.
    {
    case 1:
        temp = (31 * 1);
        printf("Number of Days in January is %d\n", temp); // Print "January" for input month number 1.
        break;
    case 2:
        temp = (31 * 1) + feb;
        printf("Number of days till February %d\n:", temp); // Print "February" for input month number 2.
        break;
    case 3:
        temp = (31 * 2) + feb;
        printf("Number of days till March %d\n:", temp); // Print "March" for input month number 3.
        break;
    case 4:
        temp = (31 * 2) + (30 * 1) + feb;
        printf("Number of days till April %d\n", temp); // Print "April" for input month number 4.
        break;
    case 5:
        temp = (31 * 3) + (30 * 1) + feb;
        printf("Number of days till May %d\n", temp); // Print "May" for input month number 5.
        break;
    case 6:
        temp = (31 * 3) + (30 * 2) + feb;
        printf("Number of days till June %d\n", temp); // Print "June" for input month number 6.
        break;
    case 7:
        temp = (31 * 4) + (30 * 2) + feb;
        printf("Number of days till July %d\n", temp); // Print "July" for input month number 7.
        break;
    case 8:
        temp = (31 * 5) + (30 * 2) + feb;
        printf("Number of days till August %d\n", temp); // Print "August" for input month number 8.
        break;
    case 9:
        temp = (31 * 5) + (30 * 3) + feb;
        printf("Number of days till September %d\n", temp); // Print "September" for input month number 9.
        break;
    case 10:
        temp = (31 * 6) + (30 * 3) + feb;
        printf("Number of days till October %d\n", temp);
        break;
    case 11:
        temp = (31 * 6) + (30 * 4) + feb;
        printf("Number of days till November %d\n", temp);
        break;
    case 12:
        temp = ((31 * 7) + (30 * 4) + feb);
        printf("Number of days till December %d\n", temp);
        break;
    default:
        printf("Invalid Month number. \nPlease try again ....\n");
        break;
    }

    return 0;
}