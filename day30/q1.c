/*
Q59: Count even and odd numbers in an array.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            int val;
            scanf("%d", &val);
            if (val % 2 == 0) even++;
            else odd++;
        }
        printf("Even=%d, Odd=%d\n", even, odd);
    }
    return 0;
}

