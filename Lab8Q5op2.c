// Write a program to reverse an array by swapping using temp variable
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
    for (i = 0; i < n / 2; i++)
    {
        int temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
    for (i = 0; i < n; i++) // loop to print the array
        printf("%d \t", array[i]);
    return 0;
}