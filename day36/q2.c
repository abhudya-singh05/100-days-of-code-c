/*
Q72: Find the sum of all elements in a matrix.
*/
#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        long sum = 0;
        for (int i = 0; i < r * c; i++) {
            int val;
            scanf("%d", &val);
            sum += val;
        }
        printf("%ld\n", sum);
    }
    return 0;
}

