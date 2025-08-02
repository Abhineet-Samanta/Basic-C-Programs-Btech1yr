// Step 1: Define a structure named 'date' with three integer members: day, month, and year.
// Step 2 : Create a function to check if a year is a leap year.
// Step 3 : Create a function to get the number of days in a month, considering leap years.
// Step 4 : Create a function to add days to the date, handling month and year transitions.
// Step 5 : Initialize the structure with the current date.
// Step 6 : Call the function to add 45 days to the current date and display the final date.

#include <stdio.h>

struct date
{ // Step1- to define a structure with variables date, month and year
    int day;
    int month;
    int year;
};

int isLeapYear(int y)
{ // Step 2- to check if the given year is a leap year if so make feb 29
    if (y % 100 != 0 && y % 4 == 0 || y % 400 == 0)
        return 1;
    return 0;
}

int daysInMonth(int month, int year)
{ // Step 3- to get the number of days in the month given
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: // jan,march,May,July,August,Oct,Dec
        return 31;
    case 4:
    case 6:
    case 9:
    case 11: // Apr, June, Sept, Nov
        return 30;
    case 2: // Feb if leap year then 29 else 28
        if (isLeapYear(year))
            return 29;
        else
            return 28;
    default:
        return 0;
    }
}

void addDays(struct date *dt, int days)
{                    // Step 4 : Create a function to add days to the date,
                     // handling month and year transitions.
                     // Add function gets the input as 17 (the date mentioned by u)and
                     // 45 (the number of days to add to 17)
    dt->day += days; // The value of dat in structure gets modified by 17+45=62
    while (dt->day > daysInMonth(dt->month, dt->year))
    {                                                // here 62>31 (the number of days in jan)
        dt->day -= daysInMonth(dt->month, dt->year); // day value gets modifies to day=62-31=31
        dt->month++;                                 // month increases from Jan to feb
        if (dt->month > 12)
        {                  // this is to adjust the year say u had entered a date in dec
            dt->month = 1; // the expected date after 45 days will be in the nest year hence
            dt->year++;    // year value in structure is increase
        } // in iteration 2 the day is now 31>28 (since the current month is feb)
    } // now day is reduced by no of the days of current month i.e
} // day = 31-28=3, mon th is increased by 1

int main()
{
    int d, m, y;
    printf("Enter the date: \n");
    scanf("%d", &d);
    printf("Enter the month: \n");
    scanf("%d", &m);
    printf("Enter the year: \n");
    scanf("%d", &y);

    // Step 5 : Initialize the structure with the current date.
    struct date currentDate = {d, m, y}; // Example current date: 17th January 2025
    int daysToAdd;
    printf("Enter the number of days to be added to the current date \n");
    scanf("%d", &daysToAdd); // Number of days to add to the current date
    // Step 6 : Call the function to add 45 days to the current date and display the final date.
    addDays(&currentDate, daysToAdd);
    printf("Final date: %02d/%02d/%d\n", currentDate.day, currentDate.month, currentDate.year);
    return 0;
}