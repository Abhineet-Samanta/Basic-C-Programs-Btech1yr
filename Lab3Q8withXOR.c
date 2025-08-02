// Write a program to interchange the values of two variables without using a third variable.
//  Logic
//  1. a = a ^ b: Store the Bitwise XOR of a and b in a. Now, a holds the result of (a ^ b).
//  2. b = a ^ b: Bitwise XOR the new value of a with b to get the original value of a.
//  This gives us, b = (a ^ b) ^ b = a.
//  3. a = a ^ b: Bitwise XOR the new value of a with the new value of b
//  (which is the original a) to get the original value of b. This gives us, a = (a ^ b) ^ a = b.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("The swapped numbers are : %d and %d", a, b);
    return 0;
}