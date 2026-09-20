/*
Q84: Convert a lowercase string to uppercase without using built-in functions.
*/
#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin)) {
        for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                printf("%c", str[i] - 32);
            } else {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

