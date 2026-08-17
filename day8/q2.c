/*
Q16: Write a program to input three numbers and find the largest among them using ifâ€“else.
*/
#include <stdio.h>

int main() {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        printf("Largest is %d\n", max);
    }
    return 0;
}

