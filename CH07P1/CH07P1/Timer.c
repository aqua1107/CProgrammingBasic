#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    int i;
    printf("Enter the timer in seconds: ");
    scanf_s("%d", &i); 

    while (i > 0) {
        printf("%d\n", i);
        Sleep(1000);
        i--;
    }
    return 0;
}
