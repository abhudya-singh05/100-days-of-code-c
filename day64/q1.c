/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    if (fgets(line, sizeof(line), stdin)) {
        char *str = line;
        char *quote = strchr(line, '\"');
        if (quote != NULL) {
            str = quote + 1;
            char *endQuote = strchr(str, '\"');
            if (endQuote != NULL) *endQuote = '\0';
        } else {
            int len = strlen(str);
            while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r')) {
                str[--len] = '\0';
            }
        }
        int maxLen = 0;
        int n = strlen(str);
        int lastIndex[256];
        for (int i = 0; i < 256; i++) lastIndex[i] = -1;
        int start = 0;
        for (int i = 0; i < n; i++) {
            unsigned char ch = (unsigned char)str[i];
            if (lastIndex[ch] >= start) {
                start = lastIndex[ch] + 1;
            }
            lastIndex[ch] = i;
            int curLen = i - start + 1;
            if (curLen > maxLen) maxLen = curLen;
        }
        printf("%d\n", maxLen);
    }
    return 0;
}

