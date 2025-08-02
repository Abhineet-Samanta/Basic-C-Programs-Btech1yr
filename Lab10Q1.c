// Write a program to change all lower-case letters into upper case in a sentence.

#include <stdio.h>
#include <ctype.h> //toupper() function used to convert lowercase alphabet to uppercase is defined in ctype.h
int main()
{
    printf("Enter the sentence\n");
    char str[100];
    gets(str);
    char ch;
    int j = 0;

    while (str[j])
    {
        ch = str[j];
        putchar(toupper(ch));
        j++;
    }

    return 0;
}