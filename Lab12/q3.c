/**
  * Programmer: Alisha Zaidi
  * Date: 28th November 2023
  * Description: Lab12 Question 03
  * 
  **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COURSES 100
#define MAX_COURSE_CODE_SIZE 20
#define MAX_COURSE_NAME_SIZE 100

typedef struct {
    char course_code[MAX_COURSE_CODE_SIZE];
    char course_name[MAX_COURSE_NAME_SIZE];
    float course_gpa;
    int semester;
} Course;

int input_course(Course* course) {
    printf("Enter course code: ");
    fgets(course->course_code, MAX_COURSE_CODE_SIZE, stdin);
    strtok(course->course_code, "\n");

    printf("Enter course name: ");
    fgets(course->course_name, MAX_COURSE_NAME_SIZE, stdin);
    strtok(course->course_name, "\n");

    printf("Enter course GPA: ");
    scanf("%f", &course->course_gpa);

    printf("Enter semester: ");
    scanf("%d", &course->semester);

    return 0;
}

void save_data_to_file(Course* courses, int course_count) {
    FILE* file = fopen("transcript.txt", "w");

    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    for (int i = 0; i < course_count; i++) {
        fprintf(file, "Course Code: %s\n", courses[i].course_code);
        fprintf(file, "Course Name: %s\n", courses[i].course_name);
        fprintf(file, "Course GPA: %.2f\n", courses[i].course_gpa);
        fprintf(file, "Semester: %d\n\n", courses[i].semester);
    }

    fclose(file);
}

void view_transcript(Course* courses, int course_count) {
    FILE* file = fopen("transcript.txt", "r");

    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }

    fclose(file);
}

int main() {
    Course courses[MAX_COURSES];
    int course_count = 0;

    while (1) {
        printf("Enter course information (leave course code empty to stop): ");
        input_course(&courses[course_count]);

        if (strlen(courses[course_count].course_code) == 0) {
            break;
        }

        course_count++;
    }

    save_data_to_file(courses, course_count);

    while (1) {
        int choice;
        printf("Choose an option:\n");
        printf("1. View Transcript\n");
        printf("2. Calculate CGPA\n");
        printf("3. Calculate SGPAs\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                view_transcript(courses, course_count);
                break;
            case 2:
                // Add code to calculate CGPA
                break;
            case 3:
                // Add code to calculate SGPAs
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
