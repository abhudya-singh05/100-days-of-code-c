/*
Q69: Find the second largest element in an array.
*/
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1 && n >= 2) {
        int arr[1000];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int max1 = INT_MIN, max2 = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (arr[i] > max1) {
                max2 = max1;
                max1 = arr[i];
            } else if (arr[i] > max2 && arr[i] != max1) {
                max2 = arr[i];
            }
        }
        if (max2 == INT_MIN) max2 = max1;
        printf("%d\n", max2);
    }
    return 0;
}

