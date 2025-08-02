// Write a program to determine whether a substring (string 1) is in the main
// string or not. If present, return the pointer of the first occurrence.

// Explanation:
// Given two strings txt and pat, the task is to find if pat is a substring of txt.
// If yes, return the index of the first occurrence, else return -1.

// Examples :
// pat is the variable name given to the string that is to be searched
// Input: txt = “abhineet”, pat = “hin”
// Output: 2
// Explanation: String “hin” is present at index 2

// Input: txt = “abhineet”, pat = “xyz”
// Output: -1.
// Explanation: There is no occurrence of “xyz” in “abhineet”

#include <stdio.h>

int main()
{
    char str[80], search[10];
    int count1 = 0, count2 = 0, i, j, flag;

    printf("Enter a string:");
    gets(str);
    printf("Enter search substring:");
    gets(search);
    while (str[count1] != '\0')
        count1++;
    while (search[count2] != '\0')
        count2++;
    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            flag = 1;
            if (str[j] != search[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("SEARCH SUCCESSFUL!");
    else
        printf("SEARCH UNSUCCESSFUL!");

    return 0;
}