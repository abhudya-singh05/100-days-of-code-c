/*
Q92: Find the first repeating lowercase alphabet in a string.
*/
#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin)) {
        int count[26] = {0};
        int firstIdx[26];
        for (int i = 0; i < 26; i++) firstIdx[i] = -1;

        for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                int idx = str[i] - 'a';
                count[idx]++;
                if (firstIdx[idx] == -1) firstIdx[idx] = i;
            }
        }
        char rep = '\0';
        int minIdx = 100000;
        for (int i = 0; i < 26; i++) {
            if (count[i] > 1 && firstIdx[i] < minIdx) {
                minIdx = firstIdx[i];
                rep = 'a' + i;
            }
        }
        if (rep != '\0') printf("%c\n", rep);
        else printf("None\n");
    }
    return 0;
}

