#include<stdio.h>
#include<string.h>

void extractDomain(char email[]) {
    int len = strlen(email);
    int atIndex = -1;

    for (int i = 0; i < len; i++) {
        if (email[i] == '@') {
            atIndex = i;
            break;
        }
    }

    if (atIndex == -1) {
        printf("Domain: Invalid email\n");
        return;
    }

    printf("Domain: %s\n", email + atIndex + 1);
}

int main() {
    char emails[][100] = {
        "user@gmail.com",
        "john.doe@company.org",
        "invalid-email",
        "admin@university.edu"
    };

    printf("Email Domain Extraction:\n");

    for (int i = 0; i < 4; i++) {
        printf("Email: %s  ->  ", emails[i]);
        extractDomain(emails[i]);
    }

    return 0;
}

