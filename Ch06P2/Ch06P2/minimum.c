#include <stdio.h>

int main() {
    int x, y, z;
    int num;

    printf("���� 3���� �Է��Ͻÿ�: ");
    scanf_s("%d %d %d", &x, &y, &z);

    if (x <= y && x <= z)
        num = 1;
    else if (y <= x && y <= z)
        num = 2;
    else
        num = 3;

    switch (num) {
    case 1:
        printf("%d�� ���� ���� ���̴�.\n", x);
        break;
    case 2:
        printf("%d�� ���� ���� ���̴�.\n", y);
        break;
    case 3:
        printf("%d�� ���� ���� ���̴�.\n", z);
        break;
    default:
        printf("���������� �Է��Դϴ�.\n");
    }

    return 0;
}
