/*
Q42: Write a program to check if a number is a perfect number.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int sum = 0;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) sum += i;
        }
        if (sum == n && n > 0) printf("Perfect number\n");
        else printf("Not perfect number\n");
    }
    return 0;
}

