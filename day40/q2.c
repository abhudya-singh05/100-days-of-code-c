/*
Q80: Multiply two matrices.
*/
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    if (scanf("%d %d", &r1, &c1) == 2) {
        int m1[100][100];
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                scanf("%d", &m1[i][j]);
            }
        }
        if (scanf("%d %d", &r2, &c2) == 2) {
            int m2[100][100];
            for (int i = 0; i < r2; i++) {
                for (int j = 0; j < c2; j++) {
                    scanf("%d", &m2[i][j]);
                }
            }
            int res[100][100] = {0};
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++) {
                    for (int k = 0; k < c1; k++) {
                        res[i][j] += m1[i][k] * m2[k][j];
                    }
                }
            }
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++) {
                    printf("%d%c", res[i][j], (j == c2 - 1) ? '\n' : ' ');
                }
            }
        }
    }
    return 0;
}

