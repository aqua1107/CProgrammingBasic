#include <stdio.h>

int main() {
	double x, y;
	scanf_s("%lf %lf", &x, &y);
	(x > 0 && y > 0) ? printf("��1��и�") : printf(" ");
	(x < 0 && y > 0) ? printf("��2��и�") : printf(" ");
	(x > 0 && y < 0) ? printf("��3��и�") : printf(" ");
	(x < 0 && y < 0) ? printf("��4��и�") : printf(" ");
	return 0;
}