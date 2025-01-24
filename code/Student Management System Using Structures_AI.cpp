#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    char name[50];
    int id;
    float score;
    char grade;
};

// Function to add a new student
void addStudent(struct Student *students, int *count) {
    if (*count >= 100) {
        printf("Cannot add more students. Maximum limit reached.\n");
        return;
    }
    printf("Enter student name: ");
    scanf("%s", students[*count].name);
    printf("Enter student ID: ");
    scanf("%d", &students[*count].id);
    printf("Enter student score: ");
    scanf("%f", &students[*count].score);
    printf("Enter student grade: ");
    scanf(" %c", &students[*count].grade); // Note the space before %c to consume newline
    (*count)++;
    printf("Student added successfully.\n");
}

// Function to display all students
void displayStudents(struct Student *students, int count) {
    if (count == 0) {
        printf("No students to display.\n");
        return;
    }
    printf("Student List:\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s, ID: %d, Score: %.2f, Grade: %c\n", 
               students[i].name, students[i].id, students[i].score, students[i].grade);
    }
}

int main() {
    struct Student students[100]; // Array to store up to 100 students
    int count = 0; // Number of students currently in the system
    int choice;

    while (1) {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                printf("Exiting the system.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
//!!!!!!