#include <stdio.h>
#include <string.h>

// defining title structure
typedef struct {
    int refid_worker;
    char worker_title[20];
    char affected_from[20];
} Title;

// defining bonus structure
typedef struct {
    int refid_worker;
    char bonus_date[20];
    int bonus_amount;
} Bonus;

// defining worker structure
typedef struct {
    char worker_id[4];
    char First_Name[10];
    char Last_Name[10];
    int salary;
    char joining_date[20];
    char department[10];
} Worker;

char *departments_name[3] = {"HR", "Admin", "Accountant"};

int get_Max_Salary(Worker workers[], int n, char *departs) {
    int Max_Salary = 1 << 31, worker = -1; // Initialize worker variable

    for (int i = 0; i < n; i++) {
        if (!strcmp(workers[i].department, departs)) {
            if (workers[i].salary > Max_Salary) {
                Max_Salary = workers[i].salary;
                worker = i;
            }
        }
    }
    return worker; // Return index of the worker
} // end of getting maximum salary

int get_total_Salary(Worker workers[], int n, char *departs) {
    int total_salary = 0;

    for (int i = 0; i < n; i++) {
        if (!strcmp(workers[i].department, departs)) {
            total_salary += workers[i].salary;
        }
    }
    return total_salary;
} // end of getting total salary

void print_Max(Worker workers[], int n) {
    for (int i = 0; i < 3; i++) {
        int workerIndex = get_Max_Salary(workers, n, departments_name[i]);
        if (workerIndex != -1) {
            Worker worker = workers[workerIndex];
            char *joining_date = strtok(worker.joining_date, " ");
            printf(" %-5s| %-11s| %-11s| %-11d| %-13s| %-11s|\n",
                   worker.worker_id, worker.First_Name, worker.Last_Name, worker.salary, joining_date, worker.department);
        }
    }
} // end of printing of maximum

void print_all(Worker workers[], int n) {
    for (int i = 0; i < 3; ++i) {
        printf("%s - %d\n", departments_name[i], get_total_Salary(workers, n, departments_name[i]));
    }
} // end of print all

int main() {
    Worker workers[8] = {
        {"001", "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
        {"002", "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
        {"003", "Vishal", "Singhal", 300000, "2014-02-20 09:00:00", "HR"},
        {"004", "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
        {"005", "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
        {"006", "Vipul", "Dewan", 200000, "2014-06-11 09:00:00", "Accountant"}, // Corrected department name
        {"007", "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Accountant"},
        {"008", "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"},
    };

    Bonus bonuses[5] = {
        {1, "2016-02-20 00:00:00", 5000},
        {2, "2016-06-11 00:00:00", 3000},
        {3, "2016-02-20 00:00:00", 4000},
        {1, "2016-02-20 00:00:00", 4500},
        {2, "2016-06-11 00:00:00", 3500}
    };

    Title titles[8] = {
        {1, "Manager", "2016-02-20 00:00:00"},
        {2, "Executive", "2016-06-11 00:00:00"},
        {8, "Executive", "2016-06-11 00:00:00"},
        {5, "Manager", "2016-06-11 00:00:00"},
        {4, "Manager", "2016-06-11 00:00:00"},
        {7, "Asst. Manager", "2016-06-11 00:00:00"},
        {6, "Executive", "2016-06-11 00:00:00"},
        {3, "Lead", "2016-06-11 00:00:00"}
    };

    printf("Highest salaries:\n");
    print_Max(workers, 8);
    printf("\nTotal salaries:\n");
    print_all(workers, 8);

    return 0;
} // end main()