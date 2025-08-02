// Write a program to create an array of employee structures to store emp-no, name,
// basic salary, and HRA. Input the details of N employees and display emp-no, name, basic,
// HRA, and net salary. Display the details of all employees whose net salary is more
// than the average net salary of all employees.

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
    double total = 0;
    double avg; // to calculate total salary of the team
    for (int i = 0; i < n; i++)
    {
        total = (total + employee[i].salary);
    }
    avg = (total / n); // to find the average salary of the team
    printf("The average salary of the team is %0.2lf", avg);
    printf("\n");
    printf("-------------- All Employees Details above the average salary  ---------------\n");
    //  for(int i=0;i<n;i++){             // to print only those employees whose salary is above or equal to average
    for (int j = 0; j < n; j++)
    {
        if (employee[j].salary >= avg)
        {
            printf("Name \t: ");
            printf("%s \n", employee[j].name);

            printf("Id \t: ");
            printf("%d \n", employee[j].id);

            printf("Salary \t: ");
            printf("%.2lf \n", employee[j].salary);

            printf("\n");
        }
    }
    //  }
    return 0;
}