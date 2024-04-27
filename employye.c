#include <stdio.h>
#include <string.h>

// Structure to store employee details
struct Employee {
    int empId;
    char ename[50];
    float salary;
    char dept[20];
};

int main() {
    // Declaring an array of structures for 50 employees
    struct Employee employees[50];
    int numEmployees;

    // Array of department names
    const char *departmentNames[] = {"ADMIN", "HR", "PRODUCTION"};

    // Prompting the user to enter the number of employees
    printf("Enter the number of employees (max 50): ");
    scanf("%d", &numEmployees);

    // Inputting details for each employee
    for (int i = 0; i < numEmployees; i++) {
        printf("\nEmployee %d details:\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &employees[i].empId);
        printf("Enter Employee Name: ");
        scanf("%s", employees[i].ename);
        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Enter Department (0 - Admin, 1 - HR, 2 - Production): ");
        int dept;
        scanf("%d", &dept);
        strcpy(employees[i].dept, departmentNames[dept]);
    }

    // Displaying details of each employee in tabular format
    printf("\nEmployee Details:\n");
    printf("-----------------------------------------------------------------\n");
    printf("| %-7s | %-20s | %-10s | %-12s |\n", "Emp ID", "Name", "Salary", "Department");
    printf("-----------------------------------------------------------------\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("| %-7d | %-20s | %-10.2f | %-12s |\n", employees[i].empId, employees[i].ename, employees[i].salary, employees[i].dept);
    }
    printf("-----------------------------------------------------------------\n");

    return 0;
}
