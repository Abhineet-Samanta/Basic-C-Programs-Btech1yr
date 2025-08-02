//  Print the given star alphabet Pattern
// A
// 1    2
// A    B   C
// 1    2   3   4
// ASCII Value A=65 , B=66 and so on and a=97, b=98 and so on
// printing a solid traingle pattern

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows and columns: \n");
    scanf("%d", &n);
    int row = 1;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;

        for (int j = 1; j <= i; j++)
        {
            if ((row % 2) == 0)
            {
                printf("%c \t", a + 64); // this print ASCII vaue as we want the character %c value of (a+64)
                a++;
            }
            else
            {
                printf("%d \t", a); // this print numeric vaue
                a++;
            }
        }
        row++;
        printf("\n");
    }
    return 0;
}
