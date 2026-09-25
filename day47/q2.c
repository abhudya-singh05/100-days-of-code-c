/*
Q94: Find the longest word in a sentence.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    if (fgets(sentence, sizeof(sentence), stdin)) {
        char longest[1000] = "";
        char current[1000] = "";
        int curLen = 0, maxLen = 0;
        for (int i = 0; sentence[i] != '\0' && sentence[i] != '\n' && sentence[i] != '\r'; i++) {
            if (sentence[i] != ' ') {
                current[curLen++] = sentence[i];
                current[curLen] = '\0';
            } else {
                if (curLen > maxLen) {
                    maxLen = curLen;
                    strcpy(longest, current);
                }
                curLen = 0;
                current[0] = '\0';
            }
        }
        if (curLen > maxLen) {
            maxLen = curLen;
            strcpy(longest, current);
        }
        printf("%s\n", longest);
    }
    return 0;
}

