/*
Q41: Write a program to swap the first and last digit of a number.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n < 10) {
            printf("%d\n", n);
            return 0;
        }
        int last = n % 10;
        int temp = n;
        int digits = 0;
        while (temp >= 10) {
            temp /= 10;
            digits++;
        }
        int first = temp;
        int pow10 = 1;
        for (int i = 0; i < digits; i++) pow10 *= 10;
        int middle = (n % pow10) / 10;
        int swapped = last * pow10 + middle * 10 + first;
        printf("%d\n", swapped);
    }
    return 0;
}

