/*
Q36: Write a program to find the HCF (GCD) of two numbers.
*/
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        printf("%d\n", gcd(a, b));
    }
    return 0;
}

