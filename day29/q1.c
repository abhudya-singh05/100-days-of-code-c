/*
Q57: Find the sum of array elements.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        long sum = 0;
        for (int i = 0; i < n; i++) {
            int val;
            scanf("%d", &val);
            sum += val;
        }
        printf("%ld\n", sum);
    }
    return 0;
}

