/*
Q56: Read and print elements of a one-dimensional array.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arr[1000];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            printf("%d%c", arr[i], (i == n - 1) ? '\n' : ' ');
        }
    }
    return 0;
}

