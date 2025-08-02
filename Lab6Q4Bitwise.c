// Write a program to convert the decimal into binary number
// Decimal to Binary Conversion using Bitwise Operator
//  Let’s take a=21; which is 10101 in Binary Form. Now, if a is right shifted by 1 i.e a = a >> 1
// then a will become a=a/(2^1). Thus, a = a/(2^1) = 10 which can be written as 1010.
// Here we see that the last 1 from (10101) is discarded.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);

    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--)
    {
        int k = n >> i; // right shift
                        // right-shifting an integer “a” with an integer “b” denoted as ‘(a>>b)‘
                        // is equivalent to dividing a with 2^b.
        if (k & 1)      // helps us know the state of first bit
                        // k & 1 does a bitwise AND operation of the k variable and the 1 literal.
                        // The expression results in either 0 (if the LSB of k is 0) or 1 (if the LSB of k is 1).
            printf("1");
        else
            printf("0");
    }
    return 0;
}