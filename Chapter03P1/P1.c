#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int salary;
	double year;
	printf("������ �Է��Ͻÿ�(����: ����): ");
	scanf_s("%d", &salary);
	year = 100000.0 / salary;
	printf("10���� �����µ� �ɸ��� �ð�(����: ��): %.2lf\n", year);
	return 0;
}