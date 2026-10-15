/*
Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
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
    int count = parse_all_ints(vals, 1000);
    if (count >= 2) {
        int k = vals[count - 1];
        int n = count - 1;
        qsort(vals, n, sizeof(int), cmp);
        if (k >= 1 && k <= n) {
            printf("%d\n", vals[k - 1]);
        }
    }
    return 0;
}

