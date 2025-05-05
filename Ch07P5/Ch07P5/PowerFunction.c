#include <stdio.h>

int main() {
    int a, b;
    int i = 0;
    double result = 1;
    printf("Enter the integer: ");
    scanf_s("%d", &a);
    printf("How many times do you want your integer to multiply? ");
    scanf_s("%d", &b);

    while (i < b) {
        result *= a;
        i++;
    }

    printf("The result is %lf: ", result);
    return 0;
}
