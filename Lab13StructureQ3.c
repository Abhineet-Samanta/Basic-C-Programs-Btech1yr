// Write a program to create an array of employee structures to store emp-no, name,
// basic salary, and HRA. Input the details of N employees and display emp-no, name, basic,
// HRA, and net salary.

#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    char name[30];
    int id;
    double salary;
    double avg;

} employee[];

int main()
{
    // number of employees
    int n;
    // array to store structure values of all employees
    // Taking each employee detail as input
    printf("Enter the number of Employee Details \n \n");
    scanf("%d", &n);
    struct Employee employee[n];

    for (int i = 0; i < n; i++)
    {
        printf("Employee %d:- \n", i + 1);

        // Name
        printf("Name: ");
        scanf(" %s", &employee[i].name);

        // ID
        printf("Id: ");
        scanf("%d", &employee[i].id);

        // Salary
        printf("Salary: ");
        scanf("%lf", &employee[i].salary);

        printf("\n");
    }

    // Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name \t: ");
        printf("%s \n", employee[i].name);

        printf("Id \t: ");
        printf("%d \n", employee[i].id);

        printf("Salary \t: ");
        printf("%.2lf \n", employee[i].salary);

        printf("\n");
    }

    return 0;
}