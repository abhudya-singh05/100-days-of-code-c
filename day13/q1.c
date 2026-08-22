/*
Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
*/
#include <stdio.h>

int main() {
    int a, b;
    char op;
    if (scanf("%d %d %c", &a, &b, &op) == 3) {
        switch (op) {
            case '+': printf("%d\n", a + b); break;
            case '-': printf("%d\n", a - b); break;
            case '*': printf("%d\n", a * b); break;
            case '/': 
                if (b != 0) printf("%d\n", a / b);
                else printf("Error: Division by zero\n");
                break;
            case '%':
                if (b != 0) printf("%d\n", a % b);
                else printf("Error: Modulo by zero\n");
                break;
            default: printf("Invalid operator\n"); break;
        }
    }
    return 0;
}

