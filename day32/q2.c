/*
Q64: Find the digit that occurs the most times in an integer number.
*/
#include <stdio.h>

int main() {
    long n;
    if (scanf("%ld", &n) == 1) {
        if (n < 0) n = -n;
        int count[10] = {0};
        if (n == 0) count[0]++;
        while (n > 0) {
            count[n % 10]++;
            n /= 10;
        }
        int maxCount = 0;
        int bestDigit = 0;
        for (int d = 0; d < 10; d++) {
            if (count[d] > maxCount) {
                maxCount = count[d];
                bestDigit = d;
            }
        }
        printf("%d\n", bestDigit);
    }
    return 0;
}

