/*
Q28: Write a program to print the product of even numbers from 1 to n.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        long prod = 1;
        for (int i = 2; i <= n; i += 2) {
            prod *= i;
        }
        printf("%ld (", prod);
        for (int i = 2; i <= n; i += 2) {
            printf("%d", i);
            if (i + 2 <= n) printf(" * ");
        }
        printf(")\n");
    }
    return 0;
}

