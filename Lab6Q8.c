// Write a program to check whether a given integer no. is palindrome or not using arrays

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    int i = 0;
    int array[20]; // max number of digits that this array can check , increase array size if needed
    int flag = 0;
    while (n > 0)
    { // loop to seperate the digits into an array
        int remainder = n % 10;
        array[i] = remainder;
        printf("  %d\n", array[i]);
        i++;
        n = n / 10;
    }
    for (int j = 0; j < i; j++)
    {                     // loop to check for palindrome
        if (j == (i - 1)) // when the center term is reached loop breaks off
            break;
        if (array[j] == array[i - 1])
            flag = 1;
        i--;
    }
    if (flag == 1)
        printf("The number entered is a palindrome");
    else
        printf("The number entered is not a palindrome");
    return 0;
}