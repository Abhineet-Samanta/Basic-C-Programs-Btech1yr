// Write a program to compute the sum of all elements stored in an array using a pointer.

#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of the Array: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    int sum = 0;
    int *ptr = array; // pt stores the base address of array arr1

    // Calculating the sum of array elements using pointer
    for (int i = 0; i < n; i++)
    {
        sum = sum + *ptr; // Adding the value pointed by pt to the sum
        ptr++;            // Moving the pointer to the next element of the array
    }
    // Displaying the sum of the array elements
    printf(" The sum of array is : %d\n\n", sum);
    return 0;
}