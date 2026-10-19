/*
Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
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

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int vals[1000];
    int n = parse_all_ints(vals, 1000);
    if (n > 0) {
        qsort(vals, n, sizeof(int), cmp);
        for (int i = 0; i < n; i++) {
            printf("%d%c", vals[i], (i == n - 1) ? '\n' : ' ');
        }
    }
    return 0;
}

