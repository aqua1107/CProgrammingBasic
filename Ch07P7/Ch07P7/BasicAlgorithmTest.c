#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i < 8; i++) {
        for (j = 6; j >= 0; j--) {
            if (j >= i) {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
