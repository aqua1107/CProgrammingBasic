#include <stdio.h>

int main() {
	int x, y;
	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &x, &y);
	int divisor = x / y;
	int dividend = x % y;
	printf("��: %d\n������: %d\n", divisor, dividend);
	return 0;
}