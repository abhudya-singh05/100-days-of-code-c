/*
Q33: Write a program to check if a number is an Armstrong number.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int temp = n;
        int digits = 0;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        temp = n;
        int sum = 0;
        while (temp > 0) {
            int d = temp % 10;
            int p = 1;
            for (int i = 0; i < digits; i++) p *= d;
            sum += p;
            temp /= 10;
        }
        if (sum == n) {
            printf("Armstrong\n");
        } else {
            printf("Not Armstrong\n");
        }
    }
    return 0;
}

