// Write a program to find whether the given number is prime or not.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    int flag = 0;
    for (int i = 2; i <= (n / 2); i++)
    { // main condition for checking prime number
        if ((n % i) == 0)
            flag = 1;
    }
    if (flag == 1)
        printf("The given number is not prime");
    else
        printf("The given number is prime");
    return 0;
}