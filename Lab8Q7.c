// Write a program to arrange the elements of an array in ascending
// order by a simple sorting method. (Bubble sort)

// Bubble Sort is a comparison based simple sorting algorithm that works
// by comparing the adjacent elements and swapping them if the elements
// are not in the correct order.

#include <stdio.h>
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // if say n=5 then i runs from 0 to 4
    {
        for (int j = 0; j < n - i - 1; j++) // j runs from 0 to 3 because j+1 automatically covers 4th index
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    bubbleSort(array, n);

    for (i = 0; i < n; i++) // loop to print the array
        printf("%d \t", array[i]);
    return 0;
}