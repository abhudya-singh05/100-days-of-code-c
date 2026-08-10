/*
Q1: Write a program to input two numbers and display their sum.
*/
#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        printf("Sum = %d\n", a + b);
    }
    return 0;
}

