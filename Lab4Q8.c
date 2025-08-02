// Write a program to check whether the given character is a vowel, consonant or a digit.
//  First check if the given character is a Alphabet, a digit or a special character.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character: \n");
    scanf("%c", &ch); // takes the input which may be alphabet, digit or special character.

    // Checks whether it is an alphabet

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("This is an alphabet.\n"); // Print message for alphabet.
    }
    else if (ch >= '0' && ch <= '9') /* whether it is digit */
    {
        printf("This is a digit.\n"); // Print message for digit.
    }
    else /* Else special character */
    {
        printf("This is a special character.\n"); // Print message for special character.
    }

    return 0;
}