/*
Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
*/
#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t;
    if (scanf("%lf %lf %lf", &p, &r, &t) == 3) {
        double si = (p * r * t) / 100.0;
        double ci = p * pow(1.0 + r / 100.0, t) - p;
        if ((int)si == si) {
            printf("Simple Interest=%d, ", (int)si);
        } else {
            printf("Simple Interest=%.2f, ", si);
        }
        if ((int)ci == ci) {
            printf("Compound Interest=%d\n", (int)ci);
        } else {
            printf("Compound Interest=%.2f\n", ci);
        }
    }
    return 0;
}

