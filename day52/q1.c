/*
Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        int x = vals[count - 1];
        int n = count - 1;
        int ans = -1;
        for (int i = 0; i < n; i++) {
            if (vals[i] >= x) {
                ans = i;
                break;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}

