#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x, y;
    int rock = 1, scissors = 2, paper = 3;

    srand((unsigned)time(NULL));

    printf("Choose one of the following -> 1 : Rock, 2 : Scissors, 3 : Paper\n");
    scanf_s("%d", &x);

    y = rand() % 3 + 1;

    printf("Computer chose: ");
    if (y == rock) printf("Rock\n");
    else if (y == scissors) printf("Scissors\n");
    else if (y == paper) printf("Paper\n");

    if (x == y)
        printf("DRAW\n");
    else if ((x == rock && y == scissors) || (x == scissors && y == paper) || (x == paper && y == rock))
        printf("You Win!\n");
    else
        printf("COM Win!\n");

    return 0;
}
