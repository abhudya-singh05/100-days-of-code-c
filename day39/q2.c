/*
Q78: Find the sum of main diagonal elements for a square matrix.
*/
#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        long sum = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                int val;
                scanf("%d", &val);
                if (i == j) sum += val;
            }
        }
        printf("%ld\n", sum);
    }
    return 0;
}

