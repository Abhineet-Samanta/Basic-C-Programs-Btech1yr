// Write a program to check whether the given number is odd or even
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : \n");
    scanf("%d", &num);
    if (num == 0 || ((num % 2) == 0))
        printf("The number is even.");
    else
        printf("The number entered is odd.");
    return 0;
}