// Write a program to find whether a given matrix is symmetric or not.

// A matrix is symmetric if it is equal to its transpose,
// or if the matrix remains unchanged when flipped along its diagonal
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
    // to print the transpose of the matrix
    int matrix1[m][m]; // the position of n and m are interchanged in transpose matrix
                       // to print the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix1[i][j] = matrix[j][i]; // to interchange elements of rows and columns
        }
        printf("\n");
    }
    // to print the transpose matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf(" %2d", matrix1[i][j]);
        }
        printf("\n");
    }

    int flag = 0;
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (matrix1[i][j] != matrix[i][j]) // most important condition of the program
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
    {
        printf("The matrix is symmetric \n");
        printf("\n");
    }
    else
    {
        printf("The matrix is not symmetric");
    }

    return 0;
}