/*
Q70: Rotate an array to the right by k positions.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arr[1000];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int k;
        if (scanf("%d", &k) == 1) {
            k = k % n;
            int rotated[1000];
            for (int i = 0; i < n; i++) {
                rotated[(i + k) % n] = arr[i];
            }
            for (int i = 0; i < n; i++) {
                printf("%d%c", rotated[i], (i == n - 1) ? '\n' : ' ');
            }
        }
    }
    return 0;
}

