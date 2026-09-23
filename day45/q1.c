/*
Q89: Count frequency of a given character in a string.
*/
#include <stdio.h>

int main() {
    char str[1000];
    char target;
    if (fgets(str, sizeof(str), stdin)) {
        if (scanf(" %c", &target) == 1) {
            int count = 0;
            for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
                if (str[i] == target) count++;
            }
            printf("%d\n", count);
        }
    }
    return 0;
}

