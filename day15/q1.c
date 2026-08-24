/*
Q29: Write a program to calculate the factorial of a number.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("%ld\n", fact);
    }
    return 0;
}

