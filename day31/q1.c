/*
Q61: Search for an element in an array using linear search.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arr[1000];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int target;
        if (scanf("%d", &target) == 1) {
            int found = -1;
            for (int i = 0; i < n; i++) {
                if (arr[i] == target) {
                    found = i;
                    break;
                }
            }
            if (found != -1) printf("Found at index %d\n", found);
            else printf("-1\n");
        }
    }
    return 0;
}

