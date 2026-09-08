/*
Q60: Count positive, negative, and zero elements in an array.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int pos = 0, neg = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            int val;
            scanf("%d", &val);
            if (val > 0) pos++;
            else if (val < 0) neg++;
            else zero++;
        }
        printf("Positive=%d, Negative=%d, Zero=%d\n", pos, neg, zero);
    }
    return 0;
}

