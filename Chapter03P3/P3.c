#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double height, base, area;
	printf("�ﰢ���� �غ�: ");
	scanf_s("%lf", &base);
	printf("�ﰢ���� ����: ");
	scanf_s("%lf", &height);
	area = 0.5 * height * base;
	printf("�ﰢ���� ����: %.2lf", area);
	return 0;
}