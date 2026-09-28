/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/
#include <stdio.h>

int main() {
    int d, m, y;
    if (scanf("%d/%d/%d", &d, &m, &y) == 3) {
        char *months[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        if (m >= 1 && m <= 12) {
            printf("%02d-%s-%d\n", d, months[m], y);
        }
    }
    return 0;
}

