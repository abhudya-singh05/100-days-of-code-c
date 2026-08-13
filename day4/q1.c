/*
Q7: Write a program to swap two numbers without using a third variable.
*/
#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        a = a + b;
        b = a - b;
        a = a - b;
        printf("After swap: %d %d\n", a, b);
    }
    return 0;
}

