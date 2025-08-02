// Write a program to find the roots of a quadratic equation
//  Hint: root = -b +/- sqrt(b2-4ac)/2a
#include <stdio.h>
#include <math.h> // library for pow and sqrt functions
int main()
{
    int a, b, c;
    printf("Enter the coefficients of variables x2,x and constant in the format ax2+bx+c: \n ");
    printf("Coefficient of x2: \n");
    scanf("%d", &a);
    printf("Coefficient of x: \n");
    scanf("%d", &b);
    printf("Constant : \n");
    scanf("%d", &c);
    float discriminant = ((pow(b, 2)) - (4 * a * c));
    printf("The discrimnant is : %0.2f \n", discriminant);
    if (discriminant == 0)
    {
        float root = (-b / (2 * a));
        printf("The equation had same roots %0.2f \n", root);
    }
    else if (discriminant > 0)
    {
        float x1 = (((-b) + sqrt(discriminant)) / (2 * a));
        float x2 = (((-b) - sqrt(discriminant)) / (2 * a));
        printf("The roots of the given quadratic exquation %dx2 + %dx +%d is %0.2f and %0.2f", a, b, c, x1, x2);
    }
    else
    {
        printf("The quadratic equation has imaginary roots. \n");
        float real = -(float)b / (2 * a); // Most Imp: Since we have declared b as int before so redeclare b as float here
        float img = sqrt(-discriminant) / (2 * a);
        printf("The roots of the given quadratic equation is (%0.2f+ %0.2f i) and(%0.2f- %0.2f i)", real, img, real, img);
    }
    return 0;
}
