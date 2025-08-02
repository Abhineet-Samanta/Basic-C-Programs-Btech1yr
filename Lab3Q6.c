// Write a program to evaluate the area of the circle Area = Pi * R2
#include <math.h>
#include <stdio.h>
#define PI 3.142
int main()
{
    float radius;
    printf("Enter the radius of the square: \n");
    scanf("%f", &radius);
    float area = PI * pow(radius, 2);
    printf("The area of the siven circle: %0.2f", area);
    return 0;
}