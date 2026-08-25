/*
Q32: Write a program to check if a number is a palindrome.
*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int original = n;
        int rev = 0;
        int temp = n;
        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }
        if (original == rev) {
            printf("Palindrome\n");
        } else {
            printf("Not palindrome\n");
        }
    }
    return 0;
}

