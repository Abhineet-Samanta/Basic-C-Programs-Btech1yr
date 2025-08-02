//  Print the given star alphabet Pattern
// A
// A    B
// A    B   C
// A    B   C   D
// ASCII Value A=65 , B=66 and so on and a=97, b=98 and so on
// printing a solid triangle pattern

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows and columns: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%c \t", a + 64); // this print ASCII vaue as we want the character %c value of (a+64)
            a++;
        }
        printf("\n");
    }
    return 0;
}