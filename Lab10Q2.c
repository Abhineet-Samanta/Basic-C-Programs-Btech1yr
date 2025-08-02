// Write a program to find the last occurrence of a particular character.

#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter the sentence\n");
    char str[100];
    gets(str);
    // printf("The string entered is:  %s\n",str);
    char ch;
    printf("Enter the character to be searched: \n");
    scanf("%c", &ch);
    int index = -1;
    int length = strlen(str);
    for (int i = 0; i <= length; i++)
    {
        if (str[i] == ch)
        {
            index = i;
        }
    }
    if (index == -1)
    {
        printf("The character %c does not exist in the string:  %2s \n", ch, str);
    }
    else
    {
        printf("The character %c exists in word/sentence : %2s and the last occurence is at index number:  %2d", ch, str, index);
    }
    return 0;
}