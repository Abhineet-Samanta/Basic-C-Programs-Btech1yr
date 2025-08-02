// Write a program to interchange the values of two variables using a third variable.

#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("The swapped numbers are : %d and %d", a, b);
    return 0;
}