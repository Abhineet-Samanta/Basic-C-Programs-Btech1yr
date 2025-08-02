// printing a star triangle with characters
// Assignment 2 Q20.
// Develop a program that demonstrates the use of nested loops to print patterns (e.g., triangle,
// pyramid) based on user input. Analyze the time complexity of your code

// The time complexity of a star pattern program in C is \(O(n^{2})\).
// This is because the program uses nested for loops to print stars on the screen.

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
        for (int j = 1; j <= i; j++) // iterate j till i
        {
            {
                printf("%c \t", s);
            }
        }
        printf("\n");
    }
    return 0;
}