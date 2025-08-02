// To find the area of a rectangle

#include <stdio.h>
int main()
{
    float l, b;

    printf("ENter the length and breadth of the rectangle: \n");
    scanf(" %f", &l);
    scanf(" %f", &b);
    printf("The area of the rectangle is %0.2f ", (l * b));

    return 0;
}