/**
 *Programmer: Alisha Zaidi
 *Date: 21 November, 2023
 *Desc: Question 5
*/

#include <stdio.h>
#include <string.h>

// Define Employee structure
struct Employee {
    int id;
    char name[100]; // Name array can have 100 characters
    double salary;
};

// Define Organization structure with nested Employee structure
struct Organization {
    char organisation_name[50]; // Organisation name can have 59 characters
    char organisation_number[20]; // Organisaton Number can have 20 characters
    struct Employee emp;
};

int main() {
    // Declare and initialize an instance of the Organization structure
    struct Organization org = {
        .organisation_name = "NU-Fast",
        .organisation_number = "NUFAST123ABC",
        .emp = {
            .id = 127,
            .name = "Linus Sebastian",
            .salary = 400000
        }
    };

    // Output information
    printf("The size of structure organisation: %zu\n", sizeof(struct Organization));
    printf("Organisation Name: %s\n", org.organisation_name);
    printf("Organisation Number: %s\n", org.organisation_number);
    printf("Employee id: %d\n", org.emp.id);
    printf("Employee name: %s\n", org.emp.name);
    printf("Employee Salary: %.2f\n", org.emp.salary);

    return 0;
} //end main

