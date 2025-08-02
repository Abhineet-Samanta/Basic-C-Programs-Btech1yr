// Introduction to Structures
// Say we need to store data of four diff students say Ravi Raj Rani Riya
// We need to store their ROll No, Total Marks, Percentage Scored and Grade
// Roll no and total marks are int type data
// percentage is float type data say 99.00, 98.86,
// Grade is a char type data say A,B,C,D
// thus we need structures which club these different data types into one

// Write a program to define a structure personal that would contain the person’s name, date of
// joining, and salary. Using this structure. write a program to read this information for
//  one person from the keyboard and print the same on the screen.
#include <stdio.h>

struct person
{
    char name[20]; // to store the name of the person
    char doj[10];  // to store the date of joining so input like 12-04-2024
    float salary;  // to store salary of the person
} p[5];            // 5 denotes we are collecting data of 5 people , p means person

int main(void)
{
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\n Enter Person Name : ");
        scanf("%s", p[i].name);
        printf("\n Enter Person Date of Joining (dd-mm-yyyy) : ");
        scanf("%s", p[i].doj);
        printf("\n Enter Person Salary : ");
        scanf("%f", &p[i].salary);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\n Person %d Detail", i + 1);
        printf("\n Name   = %s", p[i].name);
        printf("\n DOJ    = %s", p[i].doj);
        printf("\n Salary = %.2f", p[i].salary);
    }
    return 0;
}