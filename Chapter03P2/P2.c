#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double mile, meters;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &mile);
	meters = 1609.0 * mile;
	printf("%.1lf ������ %.2lf�����Դϴ�.", mile, meters);
	return 0;
}