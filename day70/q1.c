/*
Q120: Write a program to take a string input. Change it to sentence case.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char line[2000];
    if (fgets(line, sizeof(line), stdin)) {
        char *str = line;
        char *eq = strchr(line, '=');
        if (eq != NULL) {
            str = eq + 1;
            while (*str == ' ' || *str == '\t') str++;
        }
        int len = strlen(str);
        while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r')) {
            str[--len] = '\0';
        }
        int newWord = 1;
        for (int i = 0; str[i] != '\0'; i++) {
            if (isalpha(str[i])) {
                if (newWord) {
                    str[i] = toupper(str[i]);
                    newWord = 0;
                }
            } else if (isspace(str[i])) {
                newWord = 1;
            }
        }
        printf("%s\n", str);
    }
    return 0;
}

