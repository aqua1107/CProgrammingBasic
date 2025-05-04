#include <stdio.h>

int main() {
	double x, y;
	scanf_s("%lf %lf", &x, &y);
	(x > 0 && y > 0) ? printf("제1사분면") : printf(" ");
	(x < 0 && y > 0) ? printf("제2사분면") : printf(" ");
	(x > 0 && y < 0) ? printf("제3사분면") : printf(" ");
	(x < 0 && y < 0) ? printf("제4사분면") : printf(" ");
	return 0;
}