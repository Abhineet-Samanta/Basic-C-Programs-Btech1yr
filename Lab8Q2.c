// Write a program to find the sum of odd index numbers in an array.

#include <stdio.h>
int main()
{
  int array[10];
  printf("Enter the elements of the array;\n");
  int i;
  for (i = 0; i < 10; i++)
    scanf("%d", &array[i]);
  int sum = 0;
  for (int j = 1; j < i; j = j + 2)
    sum = sum + array[j];
  printf("The sum of odd indexes of array is %d", sum);
  return 0;
}