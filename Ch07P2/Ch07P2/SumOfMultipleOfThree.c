#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i < 101; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    printf("Sum of the multiples of 3 from 1 to 100 is: %d\n", sum);
    return 0;
}