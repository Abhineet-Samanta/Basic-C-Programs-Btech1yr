// printing a star triangle with numbers

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) // Main loop for pattern seedha star printing
    {
        for (int j = 1; j <= i; j++) // iterate j till i
        {
            {
                printf("%d \t", j);
            }
        }
        printf("\n");
    }
    return 0;
}
