#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &x);
	y = 3 * (x * x) + 7 * x + 11;
	printf("���׽��� ���� %.2lf", y);
	return 0;
}