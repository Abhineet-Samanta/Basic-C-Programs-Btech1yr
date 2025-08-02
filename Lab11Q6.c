// Write a program to check if the given string is a palindrome or not, using the string handling function
#include <stdio.h>
#include <string.h>
int palindrome(int x, char str[50])
{
    int flag = 0;
    int y = x - 1;
    for (int i = 0; i < y; i++)
    {
        if (str[i] != str[y]) // checks if the leftmost and the rightmost characters of the string are same or not
        {
            flag = 1;
            break;
        }
        y--;
    }
    return flag; // if flag is 0 the word is a palindrome else not
}
int main()
{
    char str[100];
    printf("Enter the word: \n");
    gets(str);
    int flag;
    int len = strlen(str);
    printf("The length of the string is: %d\n", len);
    flag = palindrome(len, str);
    if (flag == 1)
    {
        printf("The word is a not palindrome \n");
    }
    else
        printf("The word is  a palindrome \n");

    return 0;
}