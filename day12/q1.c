/*
Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: â‚¹2/day 
Next 5 days late: â‚¹4/day 
Next 20 days days late: â‚¹6/day 
More than 30 days: Membership Cancelled.
*/
#include <stdio.h>

int main() {
    int days;
    if (scanf("%d", &days) == 1) {
        if (days > 30) {
            printf("Membership Cancelled\n");
        } else {
            int fine = 0;
            if (days <= 5) {
                fine = days * 2;
            } else if (days <= 10) {
                fine = 5 * 2 + (days - 5) * 4;
            } else {
                fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
            }
            printf("Fine â‚¹%d\n", fine);
        }
    }
    return 0;
}

