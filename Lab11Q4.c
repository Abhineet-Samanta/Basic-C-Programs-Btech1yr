// Write a program to check whether the given number is prime or not.
// Using this function generates first n prime numbers using the above function.
#include <stdio.h>

int prime(int n)
{
    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
        else
            flag = 0;
    }
    return flag;
}
int main()
{
    int n;
    printf("Enter the number to check for prime: ");
    scanf("%d", &n);
    int flag = prime(n);
    if (flag == 1)
    {
        printf("The number is not a prime number \n");
    }
    else
        printf("The number is a prime number \n");
    int m;
    printf("enter the number upto which you want to generate prime numbers \n");
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        int flag = prime(i);
        if (flag == 0)
            printf(" %d", i);
    }
    return 0;
}
