#include<stdio.h>
#include<string.h>

void encrypt(char text[]) {
    for (int i = 0; i < strlen(text); i++) {
        char ch = text[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' + 3) % 26) + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' + 3) % 26) + 'A';
        }

        text[i] = ch;
    }
}

void decrypt(char text[]) {
    for (int i = 0; i < strlen(text); i++) {
        char ch = text[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' - 3 + 26) % 26) + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' - 3 + 26) % 26) + 'A';
        }

        text[i] = ch;
    }
}

int main() {
    char message[200];

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);

    printf("\nOriginal: %s", message);

    encrypt(message);
    printf("Encrypted: %s", message);

    decrypt(message);
    printf("Decrypted: %s", message);

    return 0;
}

