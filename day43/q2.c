/*
Q86: Check if a string is a palindrome.
*/
#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin)) {
        int len = 0;
        while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') len++;
        int isPalin = 1;
        for (int i = 0; i < len / 2; i++) {
            if (str[i] != str[len - 1 - i]) {
                isPalin = 0;
                break;
            }
        }
        if (isPalin) printf("Palindrome\n");
        else printf("Not palindrome\n");
    }
    return 0;
}

