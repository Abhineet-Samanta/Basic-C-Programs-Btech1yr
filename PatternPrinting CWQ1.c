// printing a solid square pattern

#include <stdio.h>
int main()
{
    char s;
    int n;
    printf("Enter the patern symbol to be repeated: \n");
    scanf("%c", &s);
    printf("Enter the number of rows and columns: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%c \t", s);
        }
        printf("\n");
    }
    return 0;
}