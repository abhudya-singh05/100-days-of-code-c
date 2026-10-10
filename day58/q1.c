/*
Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
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
        long prod[1000];
        long prefix = 1;
        for (int i = 0; i < n; i++) {
            prod[i] = prefix;
            prefix *= nums[i];
        }
        long suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            prod[i] *= suffix;
            suffix *= nums[i];
        }
        printf("[");
        for (int i = 0; i < n; i++) {
            printf("%ld%s", prod[i], (i == n - 1) ? "" : ",");
        }
        printf("]\n");
    }
    return 0;
}

