// Write a program to find the largest and smallest element in an array.
#include <stdio.h>
int main()
{
    int array[10];
    printf("Enter the elements of the array;\n");
    int i;
    for (i = 0; i < 10; i++)
        scanf("%d", &array[i]);
    int temp = array[0];  // initializing the temporary variable to value in array index 0
    int temp1 = array[0]; // initializing the temporary variable to value in array index 0

    for (int j = 1; j < i; j++) // Loop to check largest number in the array set
        if (temp < array[j])
            temp = array[j];
    printf("The largest number in the given array is %d\n", temp);

    for (int j = 1; j < i; j++) // Loop to check smallest number in the array set
        if (temp1 > array[j])
            temp1 = array[j];
    printf("The smallest number in the given array is %d \n", temp1);
    return 0;
}