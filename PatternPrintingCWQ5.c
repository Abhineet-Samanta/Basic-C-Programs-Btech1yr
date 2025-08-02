// printing a ulta star triangle with characters

#include <stdio.h>
int main()
{
    char s;
    int n;
    printf("Enter the patern symbol to be repeated: \n");
    scanf("%c", &s);
    printf("Enter the number of rows: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) // Main loop for pattern printing
    {
        for (int j = i; j <= n; j++) // iterate j from j=i to j=n
        {                            // otherwise u can also use the formula i.e
            printf("%c \t", s);      // iterate j from 1 to (n+1-i)
        } // or declare a temporary variable a=n and keep
          // iterating j from 1 to a and decrement a after each inner for loop cycle
        printf("\n"); // just before printf("\n")
    }
    return 0;
}