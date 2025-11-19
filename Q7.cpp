#include <stdio.h>
#include <string.h>

void showCourses(char students[][20], char courses[][5][20], int count[], int size) {
    printf("Student Course List:\n");
    printf("----------------------\n");

    for (int i = 0; i < size; i++) {
        printf("%s is taking: ", students[i]);
        for (int j = 0; j < count[i]; j++) {
            printf("%s ", courses[i][j]);
        }
        printf("\n");
    }
}

void searchCourse(char students[][20], char courses[][5][20], int count[], int size) {
    char search[20];
    printf("\\nEnter course to search (e.g., Physics): ");
    scanf("%s", search);

    printf("\nStudents taking %s:\n", search);

    int found = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < count[i]; j++) {
            if (strcmp(courses[i][j], search) == 0) {
                printf("- %s\n", students[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("No student is taking this course.\n");
    }
}

void findOverloaded(char students[][20], int count[], int size) {
    printf("\nOverloaded Students (more than 3 courses):\n");

    int found = 0;

    for (int i = 0; i < size; i++) {
        if (count[i] > 3) {
            printf("- %s (%d courses)\n", students[i], count[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("No overloaded students.\n");
    }
}

int main() {
    char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};

    char courses[4][5][20] = {
        {"Math", "Physics", "English"}, 
        {"Biology", "Chemistry"},
        {"Math", "Computer", "Physics", "Chemistry"},
        {"English", "History", "Arts"}
    };

    int courseCount[4] = {3, 2, 4, 3};

    int size = 4;

 
    showCourses(students, courses, courseCount, size);

    searchCourse(students, courses, courseCount, size);

    findOverloaded(students, courseCount, size);

    return 0;
}

