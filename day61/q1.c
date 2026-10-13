/*
Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
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
        for (int i = 0; i <= n - k; i++) {
            int firstNeg = 0;
            for (int j = i; j < i + k; j++) {
                if (vals[j] < 0) {
                    firstNeg = vals[j];
                    break;
                }
            }
            printf("%d%c", firstNeg, (i == n - k) ? '\n' : ' ');
        }
    }
    return 0;
}

