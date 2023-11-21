/**
 *Programmer: Alisha Zaidi
 *Date: 21 November, 2023
 *Desc: Question 1
*/

#include <stdio.h>
#include <string.h>

#define NumEmployees 10
#define s8 50
#define s10 100
#define s12 150

// Define a structure for storing employee information
struct Employee {
    char name[50];
    float salary;
    int hours_per_day;
};

// Function to increase salary based on hours worked per day
void increaseSalary(struct Employee *employee) {
    if (employee -> hours_per_day >= 12) {
        employee -> salary += s12;
    } else if (employee -> hours_per_day >= 10) {
        employee -> salary += s10;
    } else if (employee -> hours_per_day >= 8) {
        employee -> salary += s8;
    }
}

int main() {
    // Declare an array to store information for 10 employees
    struct Employee employees[NumEmployees];

    // Input employee information
    for (int i = 0; i < NumEmployees; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Hours of work per day: ");
        scanf("%d", &employees[i].hours_per_day);

        // Increase salary based on hours worked per day
        increaseSalary(&employees[i]);

        printf("\n");
    }

    // Print the name and final salary of all employees
    printf("Employee Details after Salary Increase:\n");
    for (int i = 0; i < NumEmployees; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Final Salary: $%.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
} //end main
