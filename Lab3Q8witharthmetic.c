// Write a program to interchange the values of two variables without using a third variable.
//  Logic if a=5 , b=3 , a=a+b=8 , b=new value of a-b= 8-3=5 , a= a- new value of b=8-5=3

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The swapped numbers are : %d and %d", a, b);
    return 0;
}