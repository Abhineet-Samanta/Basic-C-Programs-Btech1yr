// printing a solid rectangle pattern with numbers

#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);
    printf("Enter the number of columns: \n");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++) // Main loop for pattern printing
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d \t", i); // prints 1,2,3,4,....,m
        }
        printf("\n");
    }
    return 0;
}