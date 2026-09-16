/*
Q75: Add two matrices.
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
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++) {
                    printf("%d%c", m1[i][j] + m2[i][j], (j == c1 - 1) ? '\n' : ' ');
                }
            }
        }
    }
    return 0;
}

