#include <stdio.h>

int main() {
    int x, y, z;
    int num;

    printf("정수 3개를 입력하시오: ");
    scanf_s("%d %d %d", &x, &y, &z);

    if (x <= y && x <= z)
        num = 1;
    else if (y <= x && y <= z)
        num = 2;
    else
        num = 3;

    switch (num) {
    case 1:
        printf("%d가 가장 작은 수이다.\n", x);
        break;
    case 2:
        printf("%d가 가장 작은 수이다.\n", y);
        break;
    case 3:
        printf("%d가 가장 작은 수이다.\n", z);
        break;
    default:
        printf("비정상적인 입력입니다.\n");
    }

    return 0;
}
