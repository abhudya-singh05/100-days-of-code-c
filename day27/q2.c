/*
Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

*/
#include <stdio.h>

int main() {
    int stars[] = {1, 3, 5, 7, 5, 3, 1};
    int spaces[] = {3, 2, 1, 0, 1, 2, 3};
    int n = sizeof(stars) / sizeof(stars[0]);
    for (int i = 0; i < n; i++) {
        for (int s = 0; s < spaces[i]; s++) printf(" ");
        for (int j = 0; j < stars[i]; j++) printf("*");
        printf("\n");
    }
    return 0;
}

