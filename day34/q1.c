/*
Q67: Insert an element in an array at a given position.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arr[1001];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int pos, val;
        if (scanf("%d %d", &pos, &val) == 2) {
            for (int i = n; i > pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos] = val;
            n++;
            for (int i = 0; i < n; i++) {
                printf("%d%c", arr[i], (i == n - 1) ? '\n' : ' ');
            }
        }
    }
    return 0;
}

