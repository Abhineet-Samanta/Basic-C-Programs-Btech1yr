// Write a program to find the maximum and minimum of a given set of numbers using functions.
// (Use a function Max and return the result to the main function)
#include <stdio.h>
int maximum(int array[], int n)
{
    int max = array[0];
    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }

    return max;
}
int minimum(int array[], int n)
{
    int min = array[0];
    for (int i = 0; i < n; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }

    return min;
}

int main()
{
    int n, p;
    printf("The is a program to check the maximum and minimum in the given set of numbers: ");
    printf("Enter the number of elements you want to check : \n");
    scanf(" %d", &n);
    int array[n]; // if u take input of numbers in an array u can input any no of numbers
    printf("Enter the numbers in the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &array[i]);
    }
    p = maximum(array, n); // passing array into the function maximum
    printf("Maximum number in the given set is : %d \n", p);
    p = minimum(array, n); // passing array into the function minimum
    printf("Minimum number in the given set is : %d \n", p);
    return 0;
}