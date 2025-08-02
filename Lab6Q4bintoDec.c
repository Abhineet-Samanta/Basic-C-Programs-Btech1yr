// Write a program to convert the binary to Decimal

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter the binary number: \n");
    scanf("%d", &n);
    int sum = 0;
    int i = 0;
    while (n > 0)
    {
        int remainder = n % 10;
        sum = (sum + (remainder * pow(2, i)));
        n = (n / 10);
        i++;
    }
    printf("The decimal equivalent of the binary number is : %d", sum);
    return 0;
}