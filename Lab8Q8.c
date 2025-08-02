// Write a program to take an array of 10 elements. Split it into
// the middle and store the elements in two different arrays.
#include <stdio.h>
int main()
{
    int array[10];
    printf("Enter the elements of the array;\n");
    int i;
    for (i = 0; i < 10; i++) // loop to take input of the parent array
        scanf("%d", &array[i]);
    int array1[5];
    int array2[5];
    for (i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            array1[i] = array[i];
        }
        else
        {
            array2[i - 5] = array[i];
        }
    }
    printf("The first set of array is: \n");
    for (i = 0; i < 5; i++) // loop to print the array
        printf("%d \t", array1[i]);
    printf("\n");
    printf("The second set of array is: \n");
    for (i = 0; i < 5; i++) // loop to print the array
        printf("%d \t", array2[i]);
    return 0;
}