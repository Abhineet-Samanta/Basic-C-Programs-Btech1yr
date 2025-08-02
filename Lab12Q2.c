// Write a program to find out the greatest and the smallest among the three numbers using pointers

#include <stdio.h>
int smallest(int *x, int *y, int *z)
{
    if (*x < *y && *x < *z)
    {
        printf("The smallest number is %d", *x);
    }
    if (*y < *x && *y < *z)
    {
        printf("The smallest number is %d", *y);
    }
    if (*z < *x && *z < *y)
    {
        printf("The smallest number is %d", *z);
    }
    return;
}
int greatest(int *x, int *y, int *z)
{
    if (*x > *y && *x > *z)
    {
        printf("The greatest number is %d", *x);
    }
    if (*y > *x && *y > *z)
    {
        printf("The greatest number is %d", *y);
    }
    if (*z > *x && *z > *y)
    {
        printf("The greatest number is %d", *z);
    }
    return;
}
int main()
{
    int a, b, c;
    printf("ENter three numbers \n");
    scanf("%d %d %d", &a, &b, &c);
    greatest(&a, &b, &c);
    smallest(&a, &b, &c);
    return 0;
}