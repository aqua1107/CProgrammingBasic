#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double moon, earth;
	printf("몸무게를 입력하시오(단위: kg): ");
	scanf_s("%lf", &earth);
	moon = 0.17 * earth;
	printf("달에서의 몸무게는 %.2lfkg입니다.", moon);
	return 0;
}