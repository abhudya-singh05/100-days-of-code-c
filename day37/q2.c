/*
Q74: Find the transpose of a matrix.
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
        for (int j = 0; j < c; j++) {
            for (int i = 0; i < r; i++) {
                printf("%d%c", mat[i][j], (i == r - 1) ? '\n' : ' ');
            }
        }
    }
    return 0;
}

