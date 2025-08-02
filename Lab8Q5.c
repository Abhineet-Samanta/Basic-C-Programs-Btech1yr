// Write a program to reverse an array with an auxiliary array.

#include <stdio.h>
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
    int arr[n];
    for (int j = 0; j < 10; j++) // reversing the elements using the auxillary array
        arr[j] = array[n - j - 1];
    printf("The reversed array is : \n");
    for (i = 0; i < n; i++) // loop to print the auxillary array
        printf("%d \t", arr[i]);
    return 0;
}
