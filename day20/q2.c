/*
Q40: Write a program to find the 1â€™s complement of a binary number and print it.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    if (scanf("%s", s) == 1) {
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == '0') printf("1");
            else if (s[i] == '1') printf("0");
            else printf("%c", s[i]);
        }
        printf("\n");
    }
    return 0;
}

