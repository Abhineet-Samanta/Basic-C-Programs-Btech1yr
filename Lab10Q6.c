// Write a program to find the string length of a string without using the predefined function
//                 0 1 2 3 4 5 6 7 8
//  sTRING         A B H I N E E T /0
#include <stdio.h>
int main()
{
    int length = 0;
    char str[100];
    printf("ENter the string: \n");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("The length of the string is : %d \n", length);
    return 0;
}