/*
Q39: Write a program to find the product of odd digits of a number.
*/
#include <stdio.h>

int main() {
    long n;
    if (scanf("%ld", &n) == 1) {
        long temp = n;
        long prod = 1;
        int hasOdd = 0;
        int odds[20];
        int count = 0;
        while (temp > 0) {
            int d = temp % 10;
            if (d % 2 != 0) {
                odds[count++] = d;
                prod *= d;
                hasOdd = 1;
            }
            temp /= 10;
        }
        if (!hasOdd) {
            printf("1 (no odd digits, assume 1)\n");
        } else {
            printf("%ld (", prod);
            for (int i = count - 1; i >= 0; i--) {
                printf("%d", odds[i]);
                if (i > 0) printf("*");
            }
            printf(")\n");
        }
    }
    return 0;
}

