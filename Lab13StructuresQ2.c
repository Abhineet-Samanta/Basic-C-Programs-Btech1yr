// Write a program to create an array of student structures to store the roll no., name,
// and marks in 3 subjects. Input the details of N students into the array and display
// roll no., name, and total marks of each student.

#include <stdio.h>
#include <string.h>
struct student
{
    int roll;      // stores the roll no of the student
    char name[20]; // to store the name of the student
    float sub[3];  // stores the marks scored in subject 1, 2 and 3
    float total;   // stores the marks obtained by each student
} p[];             // [10] denotes we are collecting data of 10 students , p means student

int main()
{
    int n;
    struct student;
    printf("Enter the number of students: \n");
    scanf("%d", &n);
    printf("Enter the details of each student in the order as prompted: \n");

    for (int i = 1; i <= n; i++)
    {
        printf("Enter Record for Student-%d \n", i);
        printf("-----------------------------------\n");

        p[i].total = 0;
        printf("Enter Roll-No. : ");
        scanf(" %d", &p[i].roll);
        printf("\n Enter Student Name : ");
        scanf(" %s", &p[i].name);
        printf("Enter the marks obtained in the three subjects in order : \n");
        for (int j = 1; j <= 3; j++) // to take input of three subject marks
        {
            scanf(" %f", &p[i].sub[j]);
            p[i].total = (p[i].total + p[i].sub[j]);
        }
        printf("\n-----------------------------------\n");
    }
    // Print the Students information
    printf("=================================================================\n");
    printf("                            Student Records              \n");
    printf("=================================================================\n");

    printf("\n");
    printf("Roll No \t Name \t   Subject1 \t   Subject2  \t  Subject3  \t    Total");
    printf("\n");

    for (int i = 1; i <= n; i++) // Loop to print the input
    {
        printf("%d \t", p[i].roll);
        printf("\t %s \t", p[i].name);
        for (int j = 1; j <= 3; j++)
        {
            printf(" \t %0.2f \t", p[i].sub[j]);
        }
        printf("\t %0.2f \t", p[i].total);
        printf("\n");
    }
    return 0;
}