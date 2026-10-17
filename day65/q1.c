/*
Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[2000];
    char s[1000] = "", t[1000] = "";
    int sFound = 0, tFound = 0;
    while (fgets(line, sizeof(line), stdin)) {
        char *p = line;
        while (*p) {
            if (*p == '\"') {
                char *start = p + 1;
                char *end = strchr(start, '\"');
                if (end) {
                    *end = '\0';
                    if (!sFound) {
                        strcpy(s, start);
                        sFound = 1;
                    } else if (!tFound) {
                        strcpy(t, start);
                        tFound = 1;
                    }
                    p = end + 1;
                    continue;
                }
            }
            p++;
        }
        if (!sFound) {
            if (sscanf(line, "%s %s", s, t) == 2) {
                sFound = tFound = 1;
            }
        }
    }
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }
    int count[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) count[tolower(s[i]) - 'a']++;
    for (int i = 0; t[i] != '\0'; i++) count[tolower(t[i]) - 'a']--;
    int isAna = 1;
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            isAna = 0;
            break;
        }
    }
    if (isAna) printf("Anagram\n");
    else printf("Not Anagram\n");
    return 0;
}

