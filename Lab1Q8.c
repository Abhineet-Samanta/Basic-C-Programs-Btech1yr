// To calculate simple interest

#include <stdio.h>

int main()
{
    int p, n, r;
    printf("Enter the principle amount: \n");
    scanf("%d", &p);
    printf("Enter the number of years: \n");
    scanf(" %d", &n);
    printf("Enter the rate of interest: \n");
    scanf("%d", &r);
    float si = (p * n * r) / 100;
    float amount = p + si;
    printf("The simple interest for the period of %d years is %0.2f \n", n, si);
    printf("The amount recieved at the end of the term is %0.2f \n", amount);
    return 0;
}