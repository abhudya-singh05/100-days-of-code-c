/*
Q37: Write a program to find the LCM of two numbers.
*/
#include <stdio.h>

long gcd(long a, long b) {
    while (b != 0) {
        long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    long a, b;
    if (scanf("%ld %ld", &a, &b) == 2) {
        long lcm = (a * b) / gcd(a, b);
        printf("%ld\n", lcm);
    }
    return 0;
}

