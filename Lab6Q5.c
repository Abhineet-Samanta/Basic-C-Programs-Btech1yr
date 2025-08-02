// Write a program to reverse a given number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    int arr[10];
    int i = 0;
    while (n > 0)
    {
        int remainder = n % 10;
        arr[i] = remainder;
        n = n / 10;
        i++;
    }
    for (int j = 0; j < i; j++) // print array
        printf("%d", arr[j]);
    return 0;
}