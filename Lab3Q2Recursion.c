// Write a program to find the sum of the digits of a
// four-digit number (ex. 1234 sum=10) (without using a loop).

#include <stdio.h>
int sum(int x)
{
    // Base Case
    if (x == 0)
        return 0;
    // Recursive Case
    return ((x % 10) + sum(x / 10));
}
int main()
{
    int num, temp;
    printf("Enter the number: \n");
    scanf("%d", &num);
    temp = num;
    printf("The sum of the digits of the given number %d is %d :", temp, sum(num));
    return 0;
}