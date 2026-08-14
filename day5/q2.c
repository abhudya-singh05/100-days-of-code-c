/*
Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
*/
#include <stdio.h>

int main() {
    int total_seconds;
    if (scanf("%d", &total_seconds) == 1) {
        int hours = total_seconds / 3600;
        int remaining = total_seconds % 3600;
        int minutes = remaining / 60;
        int seconds = remaining % 60;
        printf("%d:%d:%d\n", hours, minutes, seconds);
    }
    return 0;
}

