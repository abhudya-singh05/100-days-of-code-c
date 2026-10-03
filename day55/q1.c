/*
Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than âŒŠn / 2âŒ‹ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
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
        int candidate = -1, votes = 0;
        for (int i = 0; i < n; i++) {
            if (votes == 0) {
                candidate = nums[i];
                votes = 1;
            } else if (nums[i] == candidate) {
                votes++;
            } else {
                votes--;
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == candidate) count++;
        }
        if (count > n / 2) printf("%d\n", candidate);
        else printf("-1\n");
    }
    return 0;
}

