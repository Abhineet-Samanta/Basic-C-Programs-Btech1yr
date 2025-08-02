// Write a program to find the GCD of two numbers recursively. (Ex: GCD of 9, 24 is 3)
#include <stdio.h>
int min(int a, int b) // hcf of two numbers can never be more than the
                      // minimum of two numbers so calculate the min of two values
{
    if (a > b)
        return b;
    else
        return a;
}
int gcd(int a, int b)
{
    int hcf;
    for (int i = min(a, b); i >= 1; i--) // comparing i to min number reduces the number of times the loop has to run
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            break; // once the condition is satisfied we need not look any further hence break command
        }
    }
    return hcf;
}
int main()
{
    int a, b, hcf;
    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the first number: \n");
    scanf("%d", &b);
    hcf = gcd(a, b);
    printf("The HCF/GCD of the numbers %d and %d is : %d \n", a, b, hcf);
    return 0;
}