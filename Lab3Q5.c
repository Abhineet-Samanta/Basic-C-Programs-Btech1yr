// Write a program to find out the distance between two points e.g. (x1, y1) and (x2, y2).
// Hint: Distance=√(x2-x1)2+ (y2-y1)2

#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2;
    // Prompt user for coordinates (x1, y1) and store them
    printf("Input x1: ");
    scanf("%f", &x1);
    printf("Input y1: ");
    scanf("%f", &y1);

    // Prompt user for coordinates (x2, y2) and store them
    printf("Input x2: ");
    scanf("%f", &x2);
    printf("Input y2: ");
    scanf("%f", &y2);

    // Calculate squared distance between points

    float distance = (pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("The distance between the points are : %0.2f", sqrt(distance));
    return 0;
}
