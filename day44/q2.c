/*
Q88: Replace spaces with hyphens in a string.
*/
#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin)) {
        for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
            if (str[i] == ' ') printf("-");
            else printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}

