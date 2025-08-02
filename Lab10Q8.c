// to check whether the given word is a palindrome
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string: \n");
    gets(str);
    int flag = 0;
    int len = strlen(str);
    printf("The length of the string is: %d\n", len);
    int n = len - 1; // int n refers to the indeex no we need to sheck                  //  0 1 2 3 4
    for (int i = 0; i <= n; i++)
    { //  a b b a /0
        if (str[i] != str[n - i])
        {             // say we give string as"abba" so first iteration i=0, n=3 str[3-0]=str[3]
            flag = 1; // 2nd iteration i=1, n=3, str[3-1]=str[2]
        }
    }
    if (flag == 1)
    {
        printf("The string is not a palindrome \n");
    }
    else
    {
        printf("The string is a palindrome \n");
    }
    return 0;
}