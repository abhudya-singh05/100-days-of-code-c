/*
Q98: Print initials of a name with the surname displayed in full.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[1000];
    if (fgets(name, sizeof(name), stdin)) {
        char words[20][100];
        int count = 0;
        char *token = strtok(name, " \t\r\n");
        while (token != NULL) {
            strcpy(words[count++], token);
            token = strtok(NULL, " \t\r\n");
        }
        if (count > 0) {
            for (int i = 0; i < count - 1; i++) {
                printf("%c.", words[i][0]);
            }
            if (count > 1) printf(" ");
            printf("%s\n", words[count - 1]);
        }
    }
    return 0;
}

