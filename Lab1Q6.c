// To convert Fahrenheit to Celsius

#include <stdio.h>
int main()
{
    float faren;
    float cel;
    printf("Enter the temperature in farenheit: \n");
    scanf(" %f", &faren);
    cel = (faren - 32) * 5 / 9;
    printf("Enter the temperature in celcius is: %0.2f \n", cel);
    return 0;
}