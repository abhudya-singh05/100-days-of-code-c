/*
Q35: Write a program to print all factors of a given number.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int first = 1;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                if (!first) printf(" ");
                printf("%d", i);
                first = 0;
            }
        }
        printf("\n");
    }
    return 0;
}

