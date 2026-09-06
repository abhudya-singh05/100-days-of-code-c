/*
Q55: Write a program to print all the prime numbers from 1 to n.
*/
#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int first = 1;
        for (int i = 2; i <= n; i++) {
            if (is_prime(i)) {
                if (!first) printf(" ");
                printf("%d", i);
                first = 0;
            }
        }
        printf("\n");
    }
    return 0;
}

