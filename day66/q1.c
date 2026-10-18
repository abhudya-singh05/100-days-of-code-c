/*
Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
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
        int target = vals[count - 1];
        int n = count - 1;
        int found = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (vals[i] + vals[j] == target) {
                    printf("%d %d\n", i, j);
                    found = 1;
                    break;
                }
            }
            if (found) break;
        }
        if (!found) printf("-1 -1\n");
    }
    return 0;
}

