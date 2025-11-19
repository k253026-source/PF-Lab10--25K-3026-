#include<stdio.h>
#include<string.h>
#include<ctype.h>

void checkPassword(char password[]) {
    char specialChars[] = "!@#$%";
    int hasUpper = 0, hasDigit = 0, hasSpecial = 0;

    if (strlen(password) < 8) {
        printf("Password must be at least 8 characters long.\n");
        return;
    }

    for (int i = 0; i < strlen(password); i++) {
        if (isupper(password[i])) hasUpper = 1;
        if (isdigit(password[i])) hasDigit = 1;

        for (int j = 0; j < strlen(specialChars); j++) {
            if (password[i] == specialChars[j]) {
                hasSpecial = 1;
            }
        }
    }

    if (hasUpper && hasDigit && hasSpecial) {
        printf("Password is strong.\n");
    } else {
        printf("Password is weak. Make sure it contains:\n");
        if (!hasUpper) printf("- At least one uppercase letter\n");
        if (!hasDigit) printf("- At least one digit\n");
        if (!hasSpecial) printf("- At least one special character (!, @, #, $, %)\n");
    }
}

int main() {
    char password[100];

    printf("Enter your password: ");
    scanf("%s", password);

    checkPassword(password);

    return 0;
}

