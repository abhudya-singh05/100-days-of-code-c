/*
Q79: Perform diagonal traversal of a matrix.
*/
#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        int mat[100][100];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &mat[i][j]);
            }
        }
        int first = 1;
        for (int sum = 0; sum <= r + c - 2; sum++) {
            if (sum % 2 == 1) {
                for (int i = 0; i < r; i++) {
                    int j = sum - i;
                    if (j >= 0 && j < c) {
                        if (!first) printf(" ");
                        printf("%d", mat[i][j]);
                        first = 0;
                    }
                }
            } else {
                for (int i = r - 1; i >= 0; i--) {
                    int j = sum - i;
                    if (j >= 0 && j < c) {
                        if (!first) printf(" ");
                        printf("%d", mat[i][j]);
                        first = 0;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}

