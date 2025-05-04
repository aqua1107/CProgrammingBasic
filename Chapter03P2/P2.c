#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double mile, meters;
	printf("마일을 입력하시오: ");
	scanf_s("%lf", &mile);
	meters = 1609.0 * mile;
	printf("%.1lf 마일은 %.2lf미터입니다.", mile, meters);
	return 0;
}