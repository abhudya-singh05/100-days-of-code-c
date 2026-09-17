/*
Q77: Check if the elements on the diagonal of a matrix are distinct.
*/
#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        int diag[100];
        int dCount = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                int val;
                scanf("%d", &val);
                if (i == j) {
                    diag[dCount++] = val;
                }
            }
        }
        int distinct = 1;
        for (int i = 0; i < dCount; i++) {
            for (int j = i + 1; j < dCount; j++) {
                if (diag[i] == diag[j]) {
                    distinct = 0;
                    break;
                }
            }
            if (!distinct) break;
        }
        if (distinct) printf("True\n");
        else printf("False\n");
    }
    return 0;
}

