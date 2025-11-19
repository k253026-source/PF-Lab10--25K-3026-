#include<stdio.h>

void inputStudents(char names[][20], int marks[], int *total, int n) {
    *total = 0;
    for (int i = 0; i < n; i++) {
        printf("Student %d Name: ", i + 1);
        scanf("%s", names[i]);
        printf("Student %d Marks: ", i + 1);
        scanf("%d", &marks[i]);
        *total += marks[i];
    }
}

int findTopStudent(int marks[], int n) {
    int highestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (marks[i] > marks[highestIndex]) {
            highestIndex = i;
        }
    }
    return highestIndex;
}

float calculateAverage(int total, int n) {
    return total / (float)n;
}

void displayResults(char names[][20], int marks[], int topIndex, float average, int n) {
    printf("\nStudent Marks:\n");
    printf("Name\tMarks\n");
    printf("------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\n", names[i], marks[i]);
    }
    printf("\nTop Student: %s with %d marks\n", names[topIndex], marks[topIndex]);
    printf("Class Average: %.2f\n", average);
}

int main() {
    int n = 5; 
    int nameLength = 20; 
    
    char names[5][20];
    int marks[5];
    int total;
    
    inputStudents(names, marks, &total, n);
    
    int topIndex = findTopStudent(marks, n);
    float average = calculateAverage(total, n);
    
    displayResults(names, marks, topIndex, average, n);
    
    return 0;
}

