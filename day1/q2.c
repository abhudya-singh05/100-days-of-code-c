/*
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
*/
#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", a + b, a - b, a * b, a / b);
    }
    return 0;
}

