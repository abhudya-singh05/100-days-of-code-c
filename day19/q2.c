/*
Q38: Write a program to find the sum of digits of a number.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int sum = 0;
        int temp = (n < 0) ? -n : n;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        printf("%d\n", sum);
    }
    return 0;
}

