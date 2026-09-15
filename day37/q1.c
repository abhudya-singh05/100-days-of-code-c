/*
Q73: Find the sum of each row of a matrix and store it in an array.
*/
#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        int rowSums[100];
        for (int i = 0; i < r; i++) {
            rowSums[i] = 0;
            for (int j = 0; j < c; j++) {
                int val;
                scanf("%d", &val);
                rowSums[i] += val;
            }
        }
        for (int i = 0; i < r; i++) {
            printf("%d%c", rowSums[i], (i == r - 1) ? '\n' : ' ');
        }
    }
    return 0;
}

