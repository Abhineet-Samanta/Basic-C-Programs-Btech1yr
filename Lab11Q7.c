// Write a function Sort for sorting a list of names which will use a function compare to compare two names.
// Problem Solution
// 1. Create a 2D character array to store names of some fixed size.
// 2. Take names as input from users using for loop.
// 3. Now, sort this array of names using Selection sort.
// 4. Make a nested for loop, where the upper loop extracts
// each name and inner loop compares this name by the rest of the names below it.
// 5. After executing both the loops, rearranging all the names, finally an array
//  of alphabetically sorted array will be obtained.
#include <stdio.h>
#include <string.h>
void main()
{

    char name[10][8], tname[10][8], temp[8];
    int i, j, n;

    printf("Enter the value of n \n");
    scanf("%d", &n);
    printf("Enter %d names n \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
        strcpy(tname[i], name[i]);
        // The names are simultaneously copies in another array tname by strcpy command
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0) // strcmp compares the strings
            {
                strcpy(temp, name[i]);    // this is much like swapping two numbers
                strcpy(name[i], name[j]); // here we are swapping strings
                strcpy(name[j], temp);
            }
        }
    }

    printf("\n----------------------------------------\n");
    printf("Input Namest \t Sorted names\n");
    printf("------------------------------------------\n");

    for (i = 0; i < n; i++) // Loop for printing the original and sorted names
    {
        printf("%s\t\t%s\n", tname[i], name[i]);
    }

    printf("------------------------------------------\n");
}
