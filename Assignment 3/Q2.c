#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char name[50];
    char role[50];
    int communication;
    int teamwork;
    int creativity;
} Employee;

typedef struct {
    Employee employees[5];
} Department;

char *generate_name() {
    static char name[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *new_name = malloc(sizeof(char) * 6);
    int length = rand() % 6 + 3;
    for (int i = 0; i < length; i++) {
        new_name[i] = name[rand() % strlen(name)];
    }
    new_name[length] = '\0';
    return new_name;
}

void init_employee(Employee *employee) {
    employee->name = generate_name();
    sprintf(employee->role, "%s", employee->name[0] == 'a' ? "Director" :
                            employee->name[0] == 'b' ? "Executive" :
                            employee->name[0] == 'c' ? "Manager" :
                            employee->name[0] == 'd' ? "Employee" : "Trainee");
    employee->communication = rand() % 100 + 1;
    employee->teamwork = rand() % 100 + 1;
    employee->creativity = rand() % 100 + 1;
}

void init_department(Department *department) {
    for (int i = 0; i < 5; i++) {
        init_employee(&department->employees[i]);
    }
}

int sum_employee(Employee employee) {
    return employee.communication + employee.teamwork + employee.creativity;
}

int sum_department(Department department) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += sum_employee(department.employees[i]);
    }
    return sum;
}

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
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <hello.txt>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Could not open file %s\n", argv[1]);
        return 1;
    }

    int n;
    fscanf(file, "%d", &n);
    n = (int)pow(2, n);

    int arr[n * n];
    for (int i = 0; i < n * n; i++) {
        fscanf(file, "%d", &arr[i]);
    }

    int res[n * n / 4];
    int i;
    for (int i = 0; i < n; i += 2) {
        for (int j = 0; j < n; j += 2) {
            int sub_matrix[4];
            sub_matrix[0] = arr[i * n + j];
            sub_matrix[1] = arr[i * n + j + 1];
            sub_matrix[2] = arr[(i + 1) * n + j];
            sub_matrix[3] = arr[(i + 1) * n + j + 1];
            find_max(2, sub_matrix, res, i / 2 * n / 2 + j / 2);
        }
    }

    for (int i = 0; i < n * n / 4; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");

    fclose(file);
    return 0;

FILE *fp;
char ch;
fp = fopen("hello.txt", "w");
printf("Enter data");
while((ch = getchar())!= EOF) {
  putc(ch,fp);
}
fclose(fp);
fp = fopen("hello.txt", "r");

while( (ch = getc (fp))!= EOF) {
  printf("%c",ch);
  
fclose(fp);
}
}//end main 
