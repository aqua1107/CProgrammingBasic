#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double celsius, farenheit;
	printf("ȭ������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &farenheit);
	celsius = (5.0 / 9.0) * (farenheit - 32);
	printf("�������� %.2lf�� �Դϴ�.", celsius);
	return 0;
}