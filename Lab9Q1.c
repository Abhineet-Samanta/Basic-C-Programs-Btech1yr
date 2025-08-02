// Write a program to take 3 student marks in 5 subjects.
// Print the total marks of each student and the average marks of each subject.

#include <stdio.h>

int main()
{

  // Direct initialization of 2-D char array
  char array[][100] = {"Sub1", "Sub2", "Sub3", "Sub4", "Sub5"};
  char array1[][100] = {"Shaurya", "Harshit", "Pratysh"};
  // in this program we have used /t tab command which stops at every 8th character,
  // hence we need a name upto 7 letters not more than that

  // to input the marks of each student
  int matrix1[3][5];
  printf("enter the subject marks in the order of rows of matrix\n i.e");
  printf(" say the student name is Ram so enter all the subject marks f Ram in the order of 1 to 5 :-\n"); // loop to take input of first matrix
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      scanf("%d", &matrix1[i][j]);
    }
  }
  // print the subject name
  for (int p = 0; p < 5; p++)
    printf("\t %s", array[p]);
  printf("\n");
  //  loop to print the marks scored by students in the form of matrix
  for (int i = 0; i < 3; i++)
  {
    printf("%s", array1[i]);
    for (int j = 0; j < 5; j++)
    {
      printf("\t %d", matrix1[i][j]);
    }
    printf("\n");
  }

  // to print the total marks scored by each student
  for (int i = 0; i < 3; i++)
  {
    int total = 0;
    printf("The total marks scored by %s is:-", array1[i]);
    for (int j = 0; j < 5; j++)
    {
      total = (total + matrix1[i][j]);
    }
    printf("%d", total);
    printf("\n");
  }

  // to print the average marks scored in each subject for this reverser the numbers of rows and columns
  for (int j = 0; j < 5; j++)
  {
    float avg = 0;
    float temp;

    for (int i = 0; i < 3; i++)
    {
      avg = (avg + matrix1[i][j]);
    }
    printf(" %d", avg);
    temp = (avg / 3);
    printf("The average marks scored in %s is %0.1f", array[j], temp);
    printf("\n");
  }
  return 0;
}