// Write a program to access two integers using pointers and add them.
#include <stdio.h>
int main()
{
    int m;
    int n;
    int *x = &m;
    int *y = &n;
    printf("Enter the first number: \n");
    scanf("%d", &m);
    printf("Enter the second number: \n");
    scanf("%d", &n);
    printf("The numbers entered are %d and %d \n", *x, *y);
    printf("Their sum is %d ", (*x + *y));
    return 0;
}