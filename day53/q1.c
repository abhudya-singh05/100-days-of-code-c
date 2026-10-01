/*
Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
*/
#include <stdio.h>
#include <stdlib.h>

int parse_all_ints(int arr[], int max_n) {
    char buffer[4096];
    int n = 0;
    while (fgets(buffer, sizeof(buffer), stdin)) {
        char *p = buffer;
        while (*p && n < max_n) {
            if ((*p >= '0' && *p <= '9') || (*p == '-' && (*(p + 1) >= '0' && *(p + 1) <= '9'))) {
                char *end;
                arr[n++] = (int)strtol(p, &end, 10);
                p = end;
            } else {
                p++;
            }
        }
    }
    return n;
}

int main() {
    int nums[1000];
    int n = parse_all_ints(nums, 1000);
    if (n > 0) {
        int total = 0;
        for (int i = 0; i < n; i++) total += nums[i];
        int leftSum = 0;
        int pivot = -1;
        for (int i = 0; i < n; i++) {
            if (leftSum == total - leftSum - nums[i]) {
                pivot = i;
                break;
            }
            leftSum += nums[i];
        }
        printf("%d\n", pivot);
    }
    return 0;
}

