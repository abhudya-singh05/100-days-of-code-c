/*
Q87: Count spaces, digits, and special characters in a string.
*/
#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin)) {
        int spaces = 0, digits = 0, special = 0;
        for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
            char ch = str[i];
            if (ch == ' ') spaces++;
            else if (ch >= '0' && ch <= '9') digits++;
            else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                // Alphabet
            } else {
                special++;
            }
        }
        printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    }
    return 0;
}

