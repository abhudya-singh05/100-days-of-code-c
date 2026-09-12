/*
Q68: Delete an element from an array.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arr[1000];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int pos;
        if (scanf("%d", &pos) == 1) {
            for (int i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
            for (int i = 0; i < n; i++) {
                printf("%d%c", arr[i], (i == n - 1) ? '\n' : ' ');
            }
        }
    }
    return 0;
}

