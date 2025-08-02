// Write a program to print the Fibonacci numbers that fall in the given range

#include <stdio.h>
int fibonacci1(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n > 1)
        return (fibonacci1(n - 2) + fibonacci1(n - 1));
}
int main()
{
    int end;
    printf("Enter the end of the series: ");
    scanf("%d", &end);

    for (int i = 0; i <= end; i++)
    {
        if (fibonacci1(i) <= end)
        {
            printf(" %d", fibonacci1(i));
        }
    }
    return 0;
}