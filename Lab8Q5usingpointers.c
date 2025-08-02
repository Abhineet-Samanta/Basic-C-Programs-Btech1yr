// Write a program to reverse an array using pointers and function
// The idea is to maintain two pointers: left and right, such that left points at
// the beginning of the array and right points to the end of the array.

// While left pointer is less than the right pointer, swap the elements at these
// two positions. After each swap, increment the left pointer and decrement the
// right pointer to move towards the center of array.
// This will swap all the elements in the first half with their corresponding element in the second half.

#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a; // simple function to swap two nos using pointers
    *a = *b;
    *b = temp;
}

void reverseArray(int arr[], int n)
{

    int left = 0, right = (n - 1); // Initialize left to the beginning and right to the end of the array
    while (left < right)
    {
        // Swap the elements at left and right position
        swap(&arr[left], &arr[right]); // here the array address is passed to another function Swap
        left++;                        // left index is incremented
        right--;                       // right index is decremented
    }
}
int main()
{
    int n;
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of the array;\n");
    int i;
    for (i = 0; i < n; i++) // loop to take input of the parent array
        scanf("%d", &array[i]);
    reverseArray(array, n);
    for (int i = 0; i < n; i++) // loop to print the reversed array
        printf("%d \t", array[i]);
    return 0;
}