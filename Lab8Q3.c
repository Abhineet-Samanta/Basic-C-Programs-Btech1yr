// Write a program to print the subarray that lies between the two indexes.
//  A subarray is a contiguous part of the array. An array that is inside another array.
// For example, consider the array [1, 2, 3, 4], There are 10 non-empty sub-arrays.
//  The subarrays are (1), (2), (3), (4), (1,2), (2,3), (3,4), (1,2,3), (2,3,4) and (1,2,3,4).
// In general, for an array/string of size n, there are n*(n+1)/2 non-empty subarrays/substrings.

#include <stdio.h>
int main()
{
    int array[10];
    printf("Enter the elements of the array;\n");
    int i;
    for (i = 0; i < 6; i++) // loop to take input of the parent array
        scanf("%d", &array[i]);
    int m, n;
    printf("Enter the starting index \n");
    scanf("%d", &m);
    printf("Enter the ending index \n");
    scanf("%d", &n);
    printf("The subarray feom the between the starting and ending indices are : \n");
    // Pick starting point
    if (m == n)
    {
        printf("%d", array[m]);
    }
    else
    {
        for (int i = m; i < n; i++)
        {
            // Pick ending point
            for (int j = m; j <= n; j++)
            {
                // Print subarray between current starting and ending points

                for (int k = i; k <= j; k++)
                {
                    printf("%d ", array[k]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
