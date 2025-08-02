// Write a program to take two numbers as an input and
// find whether one number is a multiple of the other or not.

#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the first number: \n");
    scanf("%d", &x);
    printf("Enter the second number: \n");
    scanf("%d", &y);
    if (x % y == 0 || y % x == 0)
        printf("The numbers are a multiple");
    else
        printf("The numbers are not a multiple");
    return 0;
}
