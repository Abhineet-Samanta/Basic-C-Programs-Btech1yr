// printing a solid rectangle pattern with characters

#include <stdio.h>
int main()
{
    char s;
    int n, m;
    printf("Enter the patern symbol to be repeated: \n");
    scanf("%c", &s);
    printf("Enter the number of rows: \n");
    scanf("%d", &n);
    printf("Enter the number of columns: \n");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++) // Main loop for pattern printing
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%c \t", s);
        }
        printf("\n");
    }
    return 0;
}