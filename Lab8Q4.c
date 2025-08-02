// Write a program to find the number of positive numbers,
// negative numbers, odd numbers, even numbers, and the number of 0 of an array

#include <stdio.h>
int main()
{
    int array[10];
    printf("Enter the elements of the array;\n"); // Std. loop to input array
    int i;
    for (i = 0; i < 10; i++)
        scanf("%d", &array[i]);
    int count = 0;  // Counter for Positive number
    int count1 = 0; // Counter for Negative number
    int count2 = 0; // Counter for Odd number
    int count3 = 0; // Counter for Even number
    int count4 = 0; // Counter for number of Zeroes
    for (i = 0; i < 10; i++)
    {                     // start the loop to check each element of the array
        if (array[i] > 0) // check for positive numbers
            count++;
        if (array[i] < 0) // check for negative numbers
            count1++;
        if ((array[i] % 2) != 0) // check for odd numbers
            count2++;
        if ((array[i] % 2) == 0) // check for even numbers
            count3++;
        if (array[i] == 0) // check for even numbers
            count4++;
    }
    printf("The number of positive numbers in the array are %d \n", count);
    printf("The number of negative numbers in the array are %d \n", count1);
    printf("The number of odd numbers in the array are %d \n", count2);
    printf("The number of even numbers in the array are %d \n", count3);
    printf("The number of Zeroes in the array are %d \n", count4);
    return 0;
}