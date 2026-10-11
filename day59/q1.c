/*
Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
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
    int vals[1000];
    int count = parse_all_ints(vals, 1000);
    if (count >= 2) {
        int k = vals[count - 1];
        int n = count - 1;
        if (k > n) k = n;
        long curSum = 0;
        for (int i = 0; i < k; i++) curSum += vals[i];
        long maxSum = curSum;
        for (int i = k; i < n; i++) {
            curSum += vals[i] - vals[i - k];
            if (curSum > maxSum) maxSum = curSum;
        }
        printf("%ld\n", maxSum);
    }
    return 0;
}

