// Write a program to convert the temperature given in
// Fahrenheit to Centigrade and Centigrade to Fahrenheit.
// Hint: C=5/9(F-32)).

#include <stdio.h>
int main()
{
    float faren, cel;
    printf("Enter the temperature in Farenheit: \n");
    scanf("%f", &faren);
    cel = ((faren - 32.0) * 5 / 9); // remember not to write 5/9 not (5/9)
    printf("The Temperature in Celcius scales is %0.2f", cel);
    printf("Enter the temperature in Celcius: \n");
    scanf("%f", &cel);
    faren = ((cel * 9 / 5) + 32.0); // remember not to write 9/5 not (9/5)
    printf("The Temperature in Farenheit scales is \n %0.2f", faren);
    return 0;
}