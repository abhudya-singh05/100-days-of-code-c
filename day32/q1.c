/*
Q63: Merge two arrays.
*/
#include <stdio.h>

int main() {
    int n1, n2;
    if (scanf("%d", &n1) == 1) {
        int arr1[1000];
        for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);
        if (scanf("%d", &n2) == 1) {
            int arr2[1000];
            for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);
            for (int i = 0; i < n1; i++) printf("%d ", arr1[i]);
            for (int i = 0; i < n2; i++) {
                printf("%d%c", arr2[i], (i == n2 - 1) ? '\n' : ' ');
            }
        }
    }
    return 0;
}

