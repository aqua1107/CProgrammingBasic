#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double moon, earth;
	printf("�����Ը� �Է��Ͻÿ�(����: kg): ");
	scanf_s("%lf", &earth);
	moon = 0.17 * earth;
	printf("�޿����� �����Դ� %.2lfkg�Դϴ�.", moon);
	return 0;
}