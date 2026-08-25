/*
Q31: Write a program to take a number as input and print its equivalent binary representation.
*/
#include <stdio.h>

int main() {
    unsigned int n;
    if (scanf("%u", &n) == 1) {
        if (n == 0) {
            printf("0\n");
            return 0;
        }
        int bits[32];
        int count = 0;
        while (n > 0) {
            bits[count++] = n % 2;
            n /= 2;
        }
        for (int i = count - 1; i >= 0; i--) {
            printf("%d", bits[i]);
        }
        printf("\n");
    }
    return 0;
}

