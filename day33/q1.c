/*
Q65: Search in a sorted array using binary search.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arr[1000];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int target;
        if (scanf("%d", &target) == 1) {
            int low = 0, high = n - 1, ans = -1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (arr[mid] == target) {
                    ans = mid;
                    break;
                } else if (arr[mid] < target) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            if (ans != -1) printf("Found at index %d\n", ans);
            else printf("-1\n");
        }
    }
    return 0;
}

