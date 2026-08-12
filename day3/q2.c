/*
Q6: Write a program to swap two numbers using a third variable.
*/
#include <stdio.h>

int main() {
    int a, b, temp;
    if (scanf("%d %d", &a, &b) == 2) {
        temp = a;
        a = b;
        b = temp;
        printf("After swap: %d %d\n", a, b);
    }
    return 0;
}

