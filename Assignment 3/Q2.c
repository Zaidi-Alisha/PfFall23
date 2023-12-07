#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Using structure to record employee data
typedef struct {
    char name[50];
    char role[50];
    int communication;
    int teamwork;
    int creativity;
} Employee;

//Using struct to define department
typedef struct {
    Employee employees[5];
} Department;

//Making a function for generating the name
char *gen_name() {
    static char name[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *new_name = malloc(sizeof(char) * 6);
    int length = rand() % 6 + 3;
    for (int i = 0; i < length; i++) {
        new_name[i] = name[rand() % strlen(name)];
    }
    new_name[length] = '\0';
    return new_name;
}

//Making function for assigning department according to name
void init_employee(Employee *employee) {
    employee->name = gen_name();
    sprintf(employee->role, "%s", employee->name[0] == 'b' ? "Director" :
                            employee->name[0] == 'c' ? "Executive" :
                            employee->name[0] == 'd' ? "Manager" :
                            employee->name[0] == 'a' ? "Employee" : "Trainee");
    employee->communication = rand() % 100 + 1;
    employee->teamwork = rand() % 100 + 1;
    employee->creativity = rand() % 100 + 1;
}

//Making function for iteration of above function
void init_department(Department *department) {
    for (int i = 0; i < 5; i++) {
        init_employee(&department->employees[i]);
    }
}

//Function for getting the sums of all departments
int sum_employee(Employee employee) {
    return employee.communication + employee.teamwork + employee.creativity;
}

//Function for comparing the sums
int sum_department(Department department) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += sum_employee(department.employees[i]);
    }
    return sum;
}

//Making function to find the best department
int find_best_department(Department departments[], int n) {
    int max_sum = 0;
    int best_department = -1;
    for (int i = 0; i < n; i++) {
        int current_sum = sum_department(departments[i]);
        if (current_sum > max_sum) {
            max_sum = current_sum;
            best_department = i;
        }
    }
    return best_department;
}

//Function for printing employee data
void print_employee(Employee employee) {
    printf("%-20s %-20s %-10d %-10d %-10d\n", employee.name, employee.role, employee.communication, employee.teamwork, employee.creativity);
}

void print_department(Department department) {
    printf("Department Sum: %d\n", sum_department(department));
    for (int i = 0; i < 5; i++) {
        print_employee(department.employees[i]);
    }
}

int main() {
    srand(time(NULL));
     int i;
    Department departments[4];
    for (int i = 0; i < 4; i++) {
        init_department(&departments[i]);
    }

    int best_department = find_best_department(departments, 4);

    printf("Department\tCommunication\tTeamwork\tCreativity\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\t", i + 1);
        print_department(departments[i]);
        printf("\n");
    }

    printf("The winner of the award for 'Best Department' is Department %d\n", best_department + 1);

    return 0;
}
    res[pos] = max;
}//end main

