/*
Q14: Write a program to input a character and check whether it is a vowel or consonant using ifâ€“else.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    if (scanf(" %c", &ch) == 1) {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
    return 0;
}

