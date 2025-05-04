#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double celsius, farenheit;
	printf("화씨값을 입력하시오: ");
	scanf_s("%lf", &farenheit);
	celsius = (5.0 / 9.0) * (farenheit - 32);
	printf("섭씨값은 %.2lf도 입니다.", celsius);
	return 0;
}