/*
Q96: Reverse each word in a sentence without changing the word order.
*/
#include <stdio.h>
#include <string.h>

void reverse(char *word, int len) {
    for (int i = 0; i < len / 2; i++) {
        char t = word[i];
        word[i] = word[len - 1 - i];
        word[len - 1 - i] = t;
    }
}

int main() {
    char line[1000];
    if (fgets(line, sizeof(line), stdin)) {
        char word[1000];
        int wLen = 0;
        for (int i = 0; line[i] != '\0' && line[i] != '\n' && line[i] != '\r'; i++) {
            if (line[i] != ' ') {
                word[wLen++] = line[i];
            } else {
                word[wLen] = '\0';
                reverse(word, wLen);
                printf("%s ", word);
                wLen = 0;
            }
        }
        if (wLen > 0) {
            word[wLen] = '\0';
            reverse(word, wLen);
            printf("%s", word);
        }
        printf("\n");
    }
    return 0;
}

