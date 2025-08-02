
// Write a program for searching for an element in the matrix and counting
// the number of occurrences of that element.

#include <stdio.h>

int main()
{
    int m, n, p, count = 0;
    printf("ENTER THE NUMBER OF ROWS:-\n");
    scanf(" %d", &m);
    printf("ENTER THE NUMBER OF COLUMNS :-\n");
    scanf("  %d", &n);
    int matrix[m][n];
    printf("enter the matrix :-\n");
    // to take input of elements of the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }
    printf("ENTER THE ELEMENT your want to check for :-\n");
    scanf("%d", &p);
    // loop to check for the number of occurences of the element
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == p)
            {
                count++;
            }
        }
    }
    printf("The number %d has occured %d times in the matrix:-\n", p, count);
    // to print the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}