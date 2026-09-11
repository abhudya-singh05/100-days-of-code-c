/*
Q66: Insert an element in a sorted array at the appropriate position.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arr[1001];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int val;
        if (scanf("%d", &val) == 1) {
            int i = n - 1;
            while (i >= 0 && arr[i] > val) {
                arr[i + 1] = arr[i];
                i--;
            }
            arr[i + 1] = val;
            n++;
            for (int j = 0; j < n; j++) {
                printf("%d%c", arr[j], (j == n - 1) ? '\n' : ' ');
            }
        }
    }
    return 0;
}

