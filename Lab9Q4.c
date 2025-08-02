// Write a program to check if the given matrix is a magic square or not.

// to check if the matrix is a magic square i.e each row, colum and diagonal add up to same number
// example  2    7   6
//          9   5   1
//          4   3   8
// all individual rows and columns and diagonals add up to 15
#include <stdio.h>

int main()
{
    int m, count2 = 0;
    int count, count1;
    printf("ENTER THE NUMBER OF ROWS and COLUMNS of Square matrix:-\n");
    scanf(" %d", &m);
    int matrix[m][m];
    printf("enter the matrix :-\n");
    // to take input of elements of the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }
    // to print the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }
    // to check if elements of each row add up to 15
    for (int i = 0; i < m; i++)
    {
        count = 0;
        count1 = 0; // value of count and count1 has to be intialised
                    // inside the loop so that there is not doubling of values
        for (int j = 0; j < m; j++)
        {
            count = (count + matrix[i][j]);
            count1 = (count1 + matrix[j][i]);
        }
    }
    // to check if diagonal elements also add up to 15
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                count2 = count2 + matrix[i][j];
            }
        }
    }
    printf("\nEach Row adds up to : %d", count);
    printf("\nEach column adds up to : %d", count1);
    printf("\nThe diagonal elements add up to : %d", count2);
    if (count == 15 && count1 == 15 && count2 == 15)
    {
        printf("\n Hence the matrix is a square matrix \n");
    }
    else
    {
        printf("\nSorry the Matrix is not a Square Matrix \n");
    }
    return 0;
}