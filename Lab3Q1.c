// Write a program to convert the time in seconds to hours, minutes, and seconds
#include <stdio.h>
int main()
{
    int sec;
    printf("Enter the time in seconds: \n");
    scanf("%d", &sec);

    // Calculate hours, minutes, and remaining seconds
    int hour = sec / 3600;
    int min = (sec - (hour * 3600)) / 60;
    int seconds = (sec - (min * 60) - (hour * 3600));

    // Print the time in format H:M:S
    printf("The time in Hours:Minutes:Seconds format is %d:%d:%d", hour, min, seconds);
    return 0;
}