/*
Q82: Print each character of a string on a new line.
*/
#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin)) {
        for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
            printf("%c\n", str[i]);
        }
    }
    return 0;
}

