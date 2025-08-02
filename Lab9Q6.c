// Write a program to find the trace and norm of a given square matrix.

// A matrix is symmetric if it is equal to its transpose,
// or if the matrix remains unchanged when flipped along its diagonal
#include <stdio.h>
#include <math.h>
int main()
{
    int m;
    printf("ENTER THE NUMBER OF ROWS and columns of the matrix:-\n");
    scanf(" %d", &m);
    int matrix[m][m];
    printf("enter the matrix :-\n");
    // to take input of elements of the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %2d", &matrix[i][j]);
        }
    }
    // to print the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %2d", matrix[i][j]);
        }
        printf("\n");
    }
    // to find the trace add the elements in the principal diagonal
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum = sum + matrix[i][i];
    }
    printf("The trace of the given matrix is : %d \n", sum);
    // to find the normal of the given matrix
    int sum1 = 0, n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            n = (matrix[i][j] * matrix[i][j]);
            sum1 = sum1 + n;
        }
    }
    float norm;
    norm = sqrt(sum1);
    printf("The norm of the given matrix is : %0.2f", norm);
    return 0;
}