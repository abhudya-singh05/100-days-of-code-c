/*
Q30: Write a program to reverse a given number.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int rev = 0;
        int temp = n;
        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }
        printf("%d\n", rev);
    }
    return 0;
}

