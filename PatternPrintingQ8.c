// printing a star triangle with odd numbers
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
                int temp = (2 * j - 1); // to get odd numbers
                printf("%d \t", temp);
            }
        }
        printf("\n");
    }
    return 0;
}
