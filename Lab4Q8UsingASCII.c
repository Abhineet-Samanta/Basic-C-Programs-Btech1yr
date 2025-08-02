// All characters whether alphabet, digit or special character have ASCII value. Input character from the user will determine if it’s Alphabet, Number or Special character.
// ASCII value ranges-
// For capital alphabets 65 – 90
// For small alphabets 97 – 122
// For digits 48 – 57
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character: \n");
    scanf("%c", &ch); // takes the input which may be alphabet, digit or special character.

    // Checks whether it is an alphabet

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        printf("This is an alphabet.\n"); // Print message for alphabet.
    }
    else if (ch >= 48 && ch <= 57) /* whether it is digit */
    {
        printf("This is a digit.\n"); // Print message for digit.
    }
    else /* Else special character */
    {
        printf("This is a special character.\n"); // Print message for special character.
    }

    return 0;
}
