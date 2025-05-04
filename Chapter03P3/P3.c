#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double height, base, area;
	printf("»ï°¢ÇüÀÇ ¹Øº¯: ");
	scanf_s("%lf", &base);
	printf("»ï°¢ÇüÀÇ ³ôÀÌ: ");
	scanf_s("%lf", &height);
	area = 0.5 * height * base;
	printf("»ï°¢ÇüÀÇ ³ĞÀÌ: %.2lf", area);
	return 0;
}