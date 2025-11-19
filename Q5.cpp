#include<stdio.h>

void inputStudents(char names[][20], int marks[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Marks %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}

int findHighest(int marks[], int n, int *total) {
    int highestIndex = 0;
    *total = 0;

    for (int i = 0; i < n; i++) {
        *total += marks[i];
        if (marks[i] > marks[highestIndex]) {
            highestIndex = i;
        }
    }

    return highestIndex;
}


void displayResults(char names[][20], int marks[], int n, int highestIndex, float average) {
    printf("\nStudent Marks:\n");
    printf("Name\tMarks\n");
    printf("----------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%s\t%d\n", names[i], marks[i]);
    }

    printf("\nHighest Scorer: %s with %d marks\n", names[highestIndex], marks[highestIndex]);
    printf("Average Marks: %.2f\n", average);
}

int main() {
    int n = 5;
    char names[5][20];
    int marks[5];
    int total;
    
    inputStudents(names, marks, n);
    
    int highestIndex = findHighest(marks, n, &total);
    float average = total / (float)n;
    
    displayResults(names, marks, n, highestIndex, average);

    return 0;
}

