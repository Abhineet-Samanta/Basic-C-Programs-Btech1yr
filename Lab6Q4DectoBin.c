// Write a program to convert the decimal into binary number
// Decimal to Binary Conversion using Arrays

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the decimal  number: \n");
    scanf("%d", &n);
    int i = 0;
    int arr[32];
    while (n > 0)
    {                   // taking remainder into array
        arr[i] = n % 2; // main loop
        n = (n / 2);
        i++;
    }
    for (int j = i - 1; j >= 0; j--) // print array in reverse order
        printf("%d", arr[j]);
    return 0;
}