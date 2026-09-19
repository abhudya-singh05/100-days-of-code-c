/*
Q81: Count characters in a string without using built-in length functions.
*/
#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin)) {
        int len = 0;
        while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') {
            len++;
        }
        printf("%d\n", len);
    }
    return 0;
}

