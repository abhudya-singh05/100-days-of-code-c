/*
Q91: Remove all vowels from a string.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin)) {
        for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') continue;
            printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}

