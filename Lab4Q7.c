// Write a program that takes three sides of a triangle input and calculates its area,
// if these conditions are satisfied a+b>c, b+c>a, a+c>b,
// Semi perimeter s=(a+b+c)/2   Area A=Sqrt(s(s-a)(s-b)(s-c))

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Enter the three sides of the triangle \n");
    printf("Enter the first side \n");
    scanf("%f", &a);
    printf("Enter the second side \n");
    scanf("%f", &b);
    printf("Enter the third side \n");
    scanf("%f", &c);
    if (a + b > c || a + c > b || b + c > a)
    {
        printf("The area of this triangle can be calculated \n");
        float s = (a + b + c) / 2.0;
        float temp = s * (s - a) * (s - b) * (s - c);
        float area = sqrt(temp);
        printf("The area is %0.2f \n", area);
    }
    else
        printf("The area of this triangle cannot be calculated \n");
    return 0;
}