/*
Q5: Write a program to convert temperature from Celsius to Fahrenheit.
*/
#include <stdio.h>

int main() {
    double c;
    if (scanf("%lf", &c) == 1) {
        double f = (c * 9.0 / 5.0) + 32.0;
        if ((int)f == f) {
            printf("Fahrenheit=%d\n", (int)f);
        } else {
            printf("Fahrenheit=%.2f\n", f);
        }
    }
    return 0;
}

