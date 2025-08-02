// Write a program to check whether a given integer no. is palindrome
// using function calling another function
#include <stdio.h>

int reverseNum(int a)
{   // their function reverses a number
    // Function to store the reversed number
    int rev = 0;
    while (a > 0)
    {

        // Extract the last digit
        int dig = a % 10;

        // Append the digit to the reversed number
        rev = rev * 10 + dig;

        // Remove the last digit
        a = a / 10;
    }
    return rev;
}

int palindrome(int n)
{ // this function checks if the entered number is a palindrome
    // Negative numbers are not palindromes
    if (n < 0)
        return 0;
    return n == reverseNum(n);
}

int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);

    if (palindrome(n))
    { // palindrome (n) returns n (the original number) and the revesed number
      // if command checks if n==reversed number
        printf("Yes the number is a palindrome\n");
    }
    else
    {
        printf("No the number is not a palindrome\n");
    }
    return 0;
}