#include <stdio.h>

int main() {
	int x, y, z;
	printf("���� 3���� �Է��Ͻÿ�: ");
	scanf_s("%d %d %d", &x, &y, &z);
	int maximum = (x > y) ? x : y;
	maximum = (y > z) ? y : z;
	printf("�ִ밪�� %d�Դϴ�.", maximum);
	return 0;
}