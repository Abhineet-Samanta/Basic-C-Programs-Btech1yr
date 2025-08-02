// Write a program to create a structure named Date having day, month,
//  and year as its elements. Store the current date in the structure.
//  Now add 45 days to the current date and display the final date.
//  example here x is number of days to be added to the given date
//  Input : d1 = 14, m1 = 5, y1 = 2017, x = 10
//  Output : d2 = 24, m2 = 5, y2 = 2017

// C program to find date after adding
// given number of days.

#include <stdio.h>

// Return if year is leap year or not.
int isLeap(int y)
{
    if (y % 100 != 0 && y % 4 == 0 || y % 400 == 0)
        return 0;

    return 1;
}

// Given a date, returns number of days elapsed
// from the  beginning of the current year (1st
// jan).
int offsetDays(int d, int m, int y)
{
    int offset = d;

    switch (m - 1)
    {
    case 11:
        offset += 30;
    case 10:
        offset += 31;
    case 9:
        offset += 30;
    case 8:
        offset += 31;
    case 7:
        offset += 31;
    case 6:
        offset += 30;
    case 5:
        offset += 31;
    case 4:
        offset += 30;
    case 3:
        offset += 31;
    case 2:
        offset += 28;
    case 1:
        offset += 31;
    }

    if (isLeap(y) && m > 2) // if month is greater than 2 i.f February and
        offset += 1;        // if year is leap year add one extra day to offset

    return offset;
}

// Given a year and days elapsed in it, finds
// date by storing results in d and m.
void revoffsetDays(int offset, int y, int *d, int *m)
{
    int month[13] = {0, 31, 28, 31, 30, 31, 30,
                     31, 31, 30, 31, 30, 31};

    if (isLeap(y))
        month[2] = 29; // this chages the value of array month[2] from 28 to 29
                       // if year is a leap year
    int i;
    for (i = 1; i <= 12; i++)
    {
        if (offset <= month[i])     // if number of days  elapsed matlab khatam ho gaye din
            break;                  // from Jan 1st is less than the no of days of the month
                                    // matlab new date will be within this current month only
        offset = offset - month[i]; // say days elapsed from Jan 1st is 125 days and month is
    } //

    *d = offset;
    *m = i;
}

// Add x days to the given date.
void addDays(int d1, int m1, int y1, int x)
{
    int offset1 = offsetDays(d1, m1, y1);
    int remDays = isLeap(y1) ? (366 - offset1) : (365 - offset1);

    // y2 is going to store result year and
    // offset2 is going to store offset days
    // in result year.
    int y2, offset2;
    if (x <= remDays)
    {
        y2 = y1;
        offset2 = offset1 + x;
    }

    else
    {
        // x may store thousands of days.
        // We find correct year and offset
        // in the year.
        x -= remDays;
        y2 = y1 + 1;
        int y2days = isLeap(y2) ? 366 : 365;
        while (x >= y2days)
        {
            x -= y2days;
            y2++;
            y2days = isLeap(y2) ? 366 : 365;
        }
        offset2 = x;
    }

    // Find values of day and month from
    // offset of result year.
    int m2, d2;
    revoffsetDays(offset2, y2, &d2, &m2);
    printf("The date after %d days is: \n", x);
    printf("Date: d2 = %d , month m2=  %d, year = %d", d2, m2, y2);
}

// Driven Program
int main()
{
    int d, m, y; // to recieve the input date
    int x;       // to recieve the number of days to be added
    printf("Enter the date in dd-mm-yyy format: \n");
    scanf("%d ", &d);
    scanf("%d ", &m);
    scanf("%d ", &y);
    printf("Enter the number of days to be added to the given date: \n");
    scanf(" %d", &x);
    addDays(d, m, y, x);

    return 0;
}