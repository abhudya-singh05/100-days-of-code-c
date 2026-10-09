/*
Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
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
        for (int i = 0; i < n; i++) {
            int prevGreater = -1;
            for (int j = i - 1; j >= 0; j--) {
                if (arr[j] > arr[i]) {
                    prevGreater = arr[j];
                    break;
                }
            }
            printf("%d%s", prevGreater, (i == n - 1) ? "\n" : ", ");
        }
    }
    return 0;
}

