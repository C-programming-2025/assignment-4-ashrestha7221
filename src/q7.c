// Write a C program that defines a structure Employee with members: name, employee ID, and salary. 
// Take input for 5 employees and display the details of the employee with the highest salary.

#include <stdio.h>

struct Employee
{
    char name[50];
    int empID;
    float salary;
};

int main()
{
    struct Employee emp[5];
    int i, maxIndex = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Employee ID: ");
        scanf("%d", &emp[i].empID);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    for (i = 1; i < 5; i++)
    {
        if (emp[i].salary > emp[maxIndex].salary)
        {
            maxIndex = i;
        }
    }

