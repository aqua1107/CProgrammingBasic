#include <stdio.h>

int main() {
	int x, y, z;
	printf("지팡이의 높이를 입력하시오: \n");
	scanf_s("%d", &x);
	printf("지팡이의 그림자의 길이를 입력하시오: \n");
	scanf_s("%d", &y);
	printf("피라미드까지의 거리를 입력하시오: \n");
	scanf_s("%d", &z);
	double height = (double) x * z / y;
	printf("피라미드의 높이는 %.2lf입니다.", height);
	return 0;
}