/**
 *Programmer: Alisha Zaidi
 *Date: 21 November, 2023
 *Desc: Question 1
*/

#include <stdio.h>
#include <string.h>

// Structure to represent a student
struct Student {
    int RollNum;
    char name[50];
    char department[50];
    char course[50];
    int YearOfJoining;
};

// Structure to represent the college database
struct CollegeDatabase {
    struct Student students[450];  //array should have capacity for 450 students
    int NumStudents;  // Current number of students in the database
};

// Function to add a student to the database
void addStudent(struct CollegeDatabase *db, int RollNum, const char *name, const char *department, const char *course, int YearOfJoining) {
    if (db -> NumStudents < 450) {
        struct Student newStudent;
        newStudent.RollNum = RollNum;
        strncpy(newStudent.name, name, sizeof(newStudent.name) - 1);
        strncpy(newStudent.department, department, sizeof(newStudent.department) - 1);
        strncpy(newStudent.course, course, sizeof(newStudent.course) - 1);
        newStudent.YearOfJoining = YearOfJoining;

        db->students[db -> NumStudents] = newStudent;
        db->NumStudents++;

        printf("Student %s added successfully.\n", name);
    } else {
        printf("Maximum number of students reached. Cannot add more students.\n");
    }
}

// Function to print students who joined in a particular year
void printStudentsByYear(struct CollegeDatabase *db, int year) {
    printf("Students who joined in %d:\n", year);
    for (int i = 0; i < db -> NumStudents; i++) {
        if (db -> students[i].YearOfJoining == year) {
            printf("%s (Roll Number: %d)\n", db -> students[i].name, db -> students[i].RollNum);
        }
    }
}

// Function to print student details by roll number
void printStudentByRollNumber(struct CollegeDatabase *db, int RollNum) {
    for (int i = 0; i < db -> NumStudents; i++) {
        if (db -> students[i].RollNum == RollNum) {
            printf("Student Details for Roll Number %d:\n", RollNum);
            printf("Name: %s\n", db -> students[i].name);
            printf("Department: %s\n", db -> students[i].department);
            printf("Course: %s\n", db -> students[i].course);
            printf("Year of Joining: %d\n", db -> students[i].YearOfJoining);
            return;
        }
    }
    printf("Student with Roll Number %d not found.\n", RollNum);
}

int main() {
    struct CollegeDatabase collegeDB;
    collegeDB.NumStudents = 0;

    // Example usage:
    addStudent(&collegeDB, 1, "Elon Musk", "Artificial Intelligence", "B.S", 2023);
    addStudent(&collegeDB, 2, "Bob Ross", "Textile Engineering", "B.E", 2023);

    // Print students by year
    printStudentsByYear(&collegeDB, 2023);

    // Print student by roll number
    printStudentByRollNumber(&collegeDB, 1);
    printStudentByRollNumber(&collegeDB, 3);  // Student not found

    return 0;
} //end main
