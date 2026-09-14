/*
Q71: Read and print a matrix.
*/
#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                int val;
                scanf("%d", &val);
                printf("%d%c", val, (j == c - 1) ? '\n' : ' ');
            }
        }
    }
    return 0;
}

