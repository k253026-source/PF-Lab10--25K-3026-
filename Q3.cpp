#include<stdio.h>
#include<string.h>
#include<ctype.h>

void analyzeText(char text[], int *vowels, int *consonants, int *digits, int *spaces) {
    *vowels = *consonants = *digits = *spaces = 0;

    for (int i = 0; i < strlen(text); i++) {
        char ch = text[i];

        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
            (*vowels)++;
        }
        else if (ch >= '0' && ch <= '9') {
            (*digits)++;
        }
        else if (ch == ' ') {
            (*spaces)++;
        }
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            (*consonants)++;
        }
    }
}


void displayStats(int vowels, int consonants, int digits, int spaces, int totalChars) {
    printf("\nStatistics:\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Total characters: %d\n", totalChars);
}

int main() {
    char text[200];
    int vowels, consonants, digits, spaces;

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    analyzeText(text, &vowels, &consonants, &digits, &spaces);

    displayStats(vowels, consonants, digits, spaces, (int)strlen(text));

    return 0;
}

