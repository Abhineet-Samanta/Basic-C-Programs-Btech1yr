// program to find the number of words in the sentence

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the sentence: \n");
    gets(str);
    int count = 1;
    int length = strlen(str);
    printf("The length of the string is: %d\n", length);
    for (int i = 0; i <= length; ++i)
    {
        if (str[i] == ' ')
        {
            count = count + 1;
        }
    }
    printf("The number of words in the sentence is: %d\n", count);
    return 0;
}