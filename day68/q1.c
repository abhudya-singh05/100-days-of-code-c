/*
Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
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
    int n = parse_all_ints(vals, 1000);
    if (n > 0) {
        long expectedSum = (long)n * (n + 1) / 2;
        long actualSum = 0;
        for (int i = 0; i < n; i++) actualSum += vals[i];
        long missing = expectedSum - actualSum;
        printf("%ld\n", missing);
    }
    return 0;
}

