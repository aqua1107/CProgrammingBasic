#include <stdio.h>

int main() {
	int x, y, z;
	printf("�������� ���̸� �Է��Ͻÿ�: \n");
	scanf_s("%d", &x);
	printf("�������� �׸����� ���̸� �Է��Ͻÿ�: \n");
	scanf_s("%d", &y);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: \n");
	scanf_s("%d", &z);
	double height = (double) x * z / y;
	printf("�Ƕ�̵��� ���̴� %.2lf�Դϴ�.", height);
	return 0;
}