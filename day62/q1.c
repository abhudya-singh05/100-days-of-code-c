/*
Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
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
    int arr[1000];
    int n = parse_all_ints(arr, 1000);
    if (n > 0) {
        long maxSoFar = arr[0];
        long currMax = arr[0];
        for (int i = 1; i < n; i++) {
            currMax = (arr[i] > currMax + arr[i]) ? arr[i] : (currMax + arr[i]);
            if (currMax > maxSoFar) maxSoFar = currMax;
        }
        printf("%ld\n", maxSoFar);
    }
    return 0;
}

