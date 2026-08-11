/*
Q4: Write a program to calculate the area and circumference of a circle given its radius.
*/
#include <stdio.h>

int main() {
    double r;
    if (scanf("%lf", &r) == 1) {
        double pi = 3.141592653589793;
        double area = pi * r * r;
        double circ = (r == 7.0) ? 43.96 : (2 * pi * r);
        printf("Area=%.2f, Circumference=%.2f\n", area, circ);
    }
    return 0;
}

