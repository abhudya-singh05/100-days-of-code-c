/*
Q97: Print the initials of a name.
*/
#include <stdio.h>

int main() {
    char name[1000];
    if (fgets(name, sizeof(name), stdin)) {
        int isStart = 1;
        for (int i = 0; name[i] != '\0' && name[i] != '\n' && name[i] != '\r'; i++) {
            if (name[i] != ' ' && isStart) {
                printf("%c.", name[i]);
                isStart = 0;
            } else if (name[i] == ' ') {
                isStart = 1;
            }
        }
        printf("\n");
    }
    return 0;
}

