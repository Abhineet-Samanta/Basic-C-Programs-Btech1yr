// Write a program to find the substring of a given string
// Let the string be {a b c d e}
// the substrings will be {"a","b","c","d","e","ab","bc","cd","de","abc","bcd","cde","abcd","bcde","abcde"}
// remember substrigs are continuous "ac" or "adc" will not be considered as substrings
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string: \n");
    gets(str);
    int len = strlen(str);
    printf("The length of the string is %d \n", len);
    int sub = ((len * (len + 1)) / 2);
    printf("Number of possible subsets of the string are : %d \n", sub);
    // int start, end;
    //  Outer loop for the starting index
    for (int start = 0; start < len; start++)
    {
        // Inner loop for the ending index
        for (int end = start + 1; end <= len; end++)
        {
            // Print the substring from start to end
            for (int j = start; j < end; j++)
            {
                putchar(str[j]);
            }
            putchar('\n'); // New line for better readability , u can use putchar() instead of printf("\n")
        }
    }
    return 0;
}
