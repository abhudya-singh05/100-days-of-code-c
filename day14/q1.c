/*
Q27: Write a program to print the sum of the first n odd numbers.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        long sum = (long)n * n;
        printf("%ld\n", sum);
    }
    return 0;
}

