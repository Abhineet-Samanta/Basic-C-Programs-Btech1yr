
// Write a program to generate the multiplication table for n numbers up to k terms (nested loops).

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the number for which you need the multiplication table: \n ");
    scanf("%d", &a);
    printf("Enter upto which term you need the multiplication table for the above number: \n");
    scanf("%d", &b);
    printf("===== The Multiplication Table is =======");
    for (int i = 1; i <= b; i++)
    {
        printf(" %d x %d = %d", a, i, (a * i));
        printf("\n");
    }
    return 0;
}
