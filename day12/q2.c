/*
Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at â‚¹5/unit 
Next 100 units at â‚¹7/unit 
Next 100 units at â‚¹10/unit 
Above at â‚¹12/unit
*/
#include <stdio.h>

int main() {
    int units;
    if (scanf("%d", &units) == 1) {
        int bill = 0;
        if (units <= 100) {
            bill = units * 5;
        } else if (units <= 200) {
            bill = 100 * 5 + (units - 100) * 7;
        } else if (units <= 300) {
            bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
        } else {
            bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
        }
        printf("Bill: â‚¹%d\n", bill);
    }
    return 0;
}

