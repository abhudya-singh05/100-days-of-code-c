/*
Q22: Write a program to find profit or loss percentage given cost price and selling price.
*/
#include <stdio.h>

int main() {
    double cp, sp;
    if (scanf("%lf %lf", &cp, &sp) == 2) {
        if (sp > cp) {
            double profit = ((sp - cp) * 100.0) / cp;
            if ((int)profit == profit) printf("Profit %d%%\n", (int)profit);
            else printf("Profit %.2f%%\n", profit);
        } else if (cp > sp) {
            double loss = ((cp - sp) * 100.0) / cp;
            if ((int)loss == loss) printf("Loss %d%%\n", (int)loss);
            else printf("Loss %.2f%%\n", loss);
        } else {
            printf("No Profit No Loss\n");
        }
    }
    return 0;
}

