/*
Q93: Check if two strings are anagrams of each other.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char s1[1000], s2[1000];
    if (scanf("%s %s", s1, s2) == 2) {
        int count[26] = {0};
        for (int i = 0; s1[i] != '\0'; i++) {
            if (isalpha(s1[i])) count[tolower(s1[i]) - 'a']++;
        }
        for (int i = 0; s2[i] != '\0'; i++) {
            if (isalpha(s2[i])) count[tolower(s2[i]) - 'a']--;
        }
        int isAnagram = 1;
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                isAnagram = 0;
                break;
            }
        }
        if (isAnagram) printf("Anagrams\n");
        else printf("Not anagrams\n");
    }
    return 0;
}

