// Write a program to multiply two matrices.

#include <stdio.h>
int main()
{
    int m, n, p, q;
    printf("ENTER THE NUMBER OF ROWS of first matrix:-\n");
    scanf(" %d", &m);
    printf("ENTER THE NUMBER OF COLUMNS of first matrix :-\n");
    scanf("  %d", &n);
    int matrix1[m][n];
    printf("enter the elements of matrix 1 :-"); // loop to take input of first matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("ENTER THE NUMBER OF ROWS of second matrix:-\n");
    scanf(" %d", &p);
    printf("ENTER THE NUMBER OF COLUMNS of second matrix :-\n");
    scanf("  %d", &q);
    int matrix2[m][n];
    printf("enter the elements of matrix 2 :-"); // loop to take input of  second matrix
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("The first matrix is: \n"); // loop to print first matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is: \n"); // loop to print second matrix
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf(" %d", matrix2[i][j]);
        }
        printf("\n");
    }
    if (n == p) // condition to check if matrices can be multiplied
    {
        printf("Matrices can be multiplied \n");
    }
    else
    {
        printf("Matrices cannot be multiplied \n");
    }
    int mul[m][q];
    for (int i = 0; i < m; i++) // matrix multiplication program
    {
        for (int j = 0; j < q; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                mul[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("The result of matrix multiplication is= \n");

    for (int i = 0; i < m; i++) // to print multiplied matrix
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}