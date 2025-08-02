// 1. To multiply two numbers.
// 2. To divide two numbers.
// 3. To check whether the given number is even or odd.
// 5. To check whether the given number is lesser than  10 or not.
// 7. To check the greater number in the given two numbers.

#include <stdio.h>

int multiply(int x, int y)
{
    return x * y;
}
int divide(int x, int y)
{
    return (float)(x / y);
}
void evenodd(int x, int y)
{
    if (x % 2 == 0)
        printf(" %d is an even number \n", x);
    else
        printf(" %d is an odd number \n", x);
    if (y % 2 == 0)
        printf(" %d is an even number \n", y);
    else
        printf(" %d is an odd number \n", y);
}
void lesser(int x, int y)
{
    if (x < 10)
        printf("%d is lesser than 10 \n", x);
    else
        printf("%d is greater than 10 \n", x);
    if (y < 10)
        printf("%d is lesser than 10 \n", y);
    else
        printf("%d is greater than 10 \n", y);
}
void greater(int x, int y)
{
    if (x > y)
        printf("%d is greater than %d \n", x, y);
    else
        printf("%d is greater than %d \n", y, x);
}

int main()
{
    int a, b;
    printf("Enter the two numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    greater(a, b);
    lesser(a, b);
    evenodd(a, b);
    printf("The divided value of these two numbers is : %0.2f \n", (float)divide(a, b));
    multiply(a, b);
    printf("The multiplied value of these two numbers is : %d \n", multiply(a, b));
    return 0;
}