#include <stdio.h>

int main() {
    int a;
    double b;
    scanf("%d %lf", &a, &b);
    printf("%f", (double) a / b);
    return 0;
}