#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//initializing data types for personal.txt
typedef struct {
    int id;
    char name[50];
} Personal;

//initializing data types for department.txt
typedef struct {
    int id;
    int salary;
} Department;

//Making function for combine.txt
void mergeAndSave(int ids[], int n) {
    Personal personal[100];
    Department department[100];
    int personalCount = 0, departmentCount = 0;

    // Reading from personal.txt file
    FILE *filePersonal = fopen("Personal.txt", "r");
    if (filePersonal == NULL) {
        printf("Could not open the file 'Personal.txt'.\n");
        exit(0);
    }

    while (fscanf(filePersonal, "%d %s", &personal[personalCount].id, personal[personalCount].name) != EOF) {
        personalCount++;
    }

    fclose(filePersonal);

    // Reading from department.txt file
    FILE *fileDepartment = fopen("Department.txt", "r");
    if (fileDepartment == NULL) {
        printf("Could not open the file 'Department.txt'.\n");
        exit(0);
    }

    while (fscanf(fileDepartment, "%d %d", &department[departmentCount].id, &department[departmentCount].salary) != EOF) {
        departmentCount++;
    }

    fclose(fileDepartment);

    // Merging the details in file
    FILE *fileCombine = fopen("Combine.txt", "w");
    if (fileCombine == NULL) {
        printf("Could not open the file 'Combine.txt'.\n");
        exit(0);
    }//error code

    fprintf(fileCombine, "ID Name Salary\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < personalCount; j++) {
            if (personal[j].id == ids[i]) {
                for (int k = 0; k < departmentCount; k++) {
                    if (department[k].id == ids[i]) {
                        fprintf(fileCombine, "%d %s %d\n", ids[i], personal[j].name, department[k].salary);
                        break;
                    }
                }
                break;
            }
        }
    }

    fclose(fileCombine);
}

int main() {
    int ids[] = {101, 102, 103};
    int n = sizeof(ids) / sizeof(ids[0]);

    mergeAndSave(ids, n);

    return 0;
}//end main