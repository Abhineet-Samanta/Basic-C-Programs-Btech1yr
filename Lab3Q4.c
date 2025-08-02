// 4.	Write a program for converting distance in mm to cm, inch, feet
// (1 cm =10mm, 1inch=2.5cm=25mm, 1 foot =12 inches=12*2.5 cm = 12*25 mm).
#include <stdio.h>
int main()
{
    int mm;
    float cm, inch, feet;
    printf("Enter the measurement in mm: \n");
    scanf("%d", &mm);
    cm = mm / 10;
    inch = mm / 25;
    feet = mm / 300;
    printf("The measurement in Centimeters, Inch and Feet are %0.2fcm , %0.2f inch , %0.2f ft", cm, inch, feet);
    return 0;
}