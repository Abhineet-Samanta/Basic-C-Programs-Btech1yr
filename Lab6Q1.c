// Write a program to take N as input and print the odd numbers in descending order.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of odd numbers required: \n");
    scanf("%d", &n);
    int x = (2 * n - 1);
    for (int i = x; i > 0; i = (i - 2))
    { // do not write i=-2, this won;t work write i=(i-2)
        printf(" %d", i);
    }
    return 0;
}
