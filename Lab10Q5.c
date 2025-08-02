// Write a program to reverse a string.

// strlen() function is used to calculate the length of the given string or char array
// excluding the NULL character ('\0'), which marks the end of the string
//                0 1 2 3 4 5 6 7 8
// sTRING         A B H I N E E T /0
// SWAPPED STRING  T E E N I H B A /0
#include <stdio.h>
#include <string.h>
int main()
{
    int length;
    int n, r = 0; // this acts as counter
    char ch;      // this temporarily stores the character for exchange just like number swapping
    char str[100];
    printf("ENter the string: \n");
    gets(str);
    length = strlen(str); // lenbth includes the null charater so run the loop for (length-1)
    printf("The length of the string is : %d \n", length);
    n = (length - 1);
    while (r <= n)
    {
        ch = str[r];
        str[r] = str[n];
        str[n] = ch;
        r++;
        n--;
    }
    printf("The reversed string is : %s \n", str);
    return 0;
}
