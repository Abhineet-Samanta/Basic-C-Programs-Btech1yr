// Write a program to concatenate/length/copy two strings using the library function.

#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100];
  printf("Enter the first word/sentence: \n");
  gets(str1);
  char str2[100];
  printf("Enter the second word/sentence: \n");
  gets(str2);

  // strcat() function helps to join two strings but prints both strings side by side without any space
  // strcat(str1,str2);
  // printf("The concanated string without space is: %s\n", str1);
  // to retain the space between two strings use the below command
  strcat(strcat(str1, " "), str2); // in this command str is joined to a space and then joined to second strin str2
  printf("The concanated string space is: %s\n", str1);
  return 0;
}